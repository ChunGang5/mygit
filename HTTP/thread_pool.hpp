#include<iostream>
#include<queue>
#include<pthread.h>
using namespace std;
typedef void* (*handler_t)(void*);
class Task
{
private:
	int* sock_p;
	handler_t handler;
public:
	Task()
		:sock_p(nullptr)
		 ,handler(nullptr)
	{	
	}
	Task(int* sock_p_,handler_t h_)
		:sock_p(sock_p_)
		 ,handler(h_)
	{

	}
	void Run()
	{
		handler(sock_p);
	}
	~Task()
	{
	}
};

class Threadpool
{
	private:
		int num;
		queue<Task> q;
		pthread_mutex_t lock;
		pthread_cond_t cond;
	public:
		Threadpool(int _num=10)
			:num(_num)
		{
			pthread_mutex_init(&lock,nullptr);
			pthread_cond_init(&cond,nullptr);
		}
		void LockQueue()
		{
			pthread_mutex_lock(&lock);
		}
		void UnlockQueue()
		{
			pthread_mutex_unlock(&lock);	
		}
		void ThreadWait()
		{
			pthread_cond_wait(&cond,&lock);
		}
		void ThreadWeakUp()
		{
			pthread_cond_signal(&cond);
		}
		static void* ThreadRoutine(void* arg)
		{
			Threadpool* pt=(Threadpool*)arg;
			while(true)
			{
				pt->LockQueue();
				while(pt->q.empty())
				{
					pt->ThreadWait();
				}
				Task t;
				pt->PopTask(t);
				pt->UnlockQueue();
				t.Run();
			}
		}
		void InitThreadpool()
		{
			pthread_t id;
			for(int i=0;i<num;i++)
			{
				pthread_create(&id,nullptr,ThreadRoutine,this);
			}
		}
		void PopTask(Task& t)
		{
			LockQueue();
			t=q.front();
			q.pop();
			UnlockQueue();
		}
		void PushTask(const Task& t)
		{
			LockQueue();
			q.push(t);
			UnlockQueue();
			ThreadWeakUp();
		}
		~Threadpool()
		{
			pthread_mutex_destroy(&lock);
			pthread_cond_destroy(&cond);
		}

};
