package chengang.com.localmusic;

import androidx.appcompat.app.AppCompatActivity;

import android.media.MediaPlayer;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

import java.io.IOException;

import android.Manifest;
import android.content.pm.PackageManager;
import android.media.AudioManager;
import android.media.MediaPlayer;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.Switch;

import androidx.appcompat.app.AppCompatActivity;
import androidx.core.app.ActivityCompat;
import androidx.core.content.ContextCompat;

;import java.io.IOException;
public class MainActivity extends AppCompatActivity implements View.OnClickListener
{
    private Button mbtStart,mbtPause,mbtStop,mbtLast,mbtNext;
    String MSpath;
    int stoppos=0;
    MediaPlayer mMediplay;
    String []SongPath={
            "/sdcard/Music/mc1.mp3",
            "/sdcard/Music/mc2.mp3",
            "/sdcard/Music/mc3.mp3",
            "/sdcard/Music/mc4.mp3"
    };

    int index=0;
    public static final int EXTERNAL_STORAGE_REQ_CODE=10;

    @Override
    protected void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        mbtStart=(Button)findViewById(R.id.start);
        mbtPause=(Button)findViewById(R.id.pause);
        mbtStop=(Button)findViewById(R.id.stop);
        mbtLast=(Button)findViewById(R.id.last_song);
        mbtNext=(Button)findViewById(R.id.next_song);

        int permission = ActivityCompat.checkSelfPermission(this,
                Manifest.permission.WRITE_EXTERNAL_STORAGE);

        if (permission != PackageManager.PERMISSION_GRANTED) {
            // 请求权限
            ActivityCompat.requestPermissions(this, new String[]{Manifest.permission.WRITE_EXTERNAL_STORAGE},

                    EXTERNAL_STORAGE_REQ_CODE);
        }
        if (ContextCompat.checkSelfPermission(MainActivity.this, Manifest.permission.WRITE_EXTERNAL_STORAGE) != PackageManager.PERMISSION_GRANTED) {
            ActivityCompat.requestPermissions(MainActivity.this,                    new String[]{Manifest.permission.WRITE_EXTERNAL_STORAGE}, 1);}

        mbtStart.setOnClickListener(this);
        mbtPause.setOnClickListener(this);
        mbtStop.setOnClickListener(this);
        mbtLast.setOnClickListener(new my_Clieck());
        mbtNext.setOnClickListener(new my_Clieck());

        mMediplay.setLooping(true);     //循环播放
        mMediplay=new MediaPlayer();
        MSpath="/sdcard/Music/mc1.mp3";
    }
    public void onClick(View v)
    {
        switch (v.getId())
        {
            case R.id.start:
                try {
                    mMediplay.reset();
                    mMediplay.setAudioStreamType(AudioManager.STREAM_MUSIC);
                    mMediplay.setDataSource(MSpath);
                    mMediplay.prepare();
                    if(stoppos!=0)
                    {
                        mMediplay.seekTo(stoppos);  //指定播放文件的播放位置
                        mMediplay.start();
                    }
                }catch (IOException e)
                {
                    e.printStackTrace();
                }
                break;
            case R.id.pause:
                stoppos=mMediplay.getCurrentPosition(); //获得当前播放位置
                if(mMediplay.isPlaying())   //播放器是否正在播放
                {
                    mMediplay.pause();
                    mbtPause.setText("继续");
                }
                else
                {
                    mbtPause.setText("暂停");
                    mMediplay.start();
                }
                break;
            case R.id.stop:
                mMediplay.stop();
                mMediplay.release();
                break;
            default:
                break;
        }
    }
    class my_Clieck implements View.OnClickListener
    {
        public void onClick(View v)
        {
            switch (v.getId())
            {
                case R.id.last_song:
                    if(0<=index && index<=SongPath.length)
                        --index;
                    MSpath=SongPath[index];
                    mMediplay.start();
                    break;
                case R.id.next_song:
                    if(index>=0 && index<SongPath.length-1)
                        index++;
                    else    //否则现在已经是最后一首歌了
                        index=0;    //下一首是第一首歌
                    MSpath=SongPath[index];
                    mMediplay.start();
                    break;
            }
        }
    }
}

