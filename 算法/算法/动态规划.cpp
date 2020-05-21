//42：连续子数组最大和
//方法一：动态规划
//动态规划的4个步骤：1、状态
/*2、状态转移方程
3、初始值（还要注意边界问题）
4、返回值
*/
//class Solution {
//public:
//	int FindGreatestSumOfSubArray(vector<int> array)
//	{
//		int len = array.size();
//		//申请一个数组，用以存放，不同长度子串的最大和
//		int *ret = new int[len];
//		ret[0] = array[0];
//		for (int i = 1; i<len; i++)
//		{
//			//状态转移方程：F(i)=max(F(i-1)+array[i],array[i]);
//			ret[i] = max(ret[i - 1] + array[i], array[i]);
//		}
//		int MaxSum = ret[0];
//		for (int i = 1; i<len; i++)
//			MaxSum = max(MaxSum, ret[i]);
//		return MaxSum;
//	}
//};

//普通方法
//class Solution {
//public:
//	int FindGreatestSumOfSubArray(vector<int> array)
//	{
//		int CurSum = array[0];
//		int MaxSum = array[0];
//		int len = array.size();
//		for (int i = 1; i<len; i++)    //控制子串的长度
//		{
//			if (CurSum <= 0)    //标记子串的开始位置
//				CurSum = array[i];
//			else
//				CurSum += array[i];    //更新子串的最大和
//			if (CurSum>MaxSum)
//				MaxSum = CurSum;    //最大子串的最大和
//		}
//		return MaxSum;
//	}
//};

//给定一个字符串s和一组单词dict，判断s是否可以用空格分割成一个单词序列，使得单词序列中所有的单词都是dict中的单词（序列可以包含一个或多个单词）。
//例如:
//给定s = “leetcode”；
//dict = ["leet", "code"].
//返回true，因为"leetcode"可以被分割成"leet code".

//class Solution {
//public:
//	bool wordBreak(string s, unordered_set<string> &dict)
//	{
//		if (s.empty())
//		{
//			return false;
//		}
//		int len = s.size();
//		vector<bool> ret(len + 1, false);
//		//1、设置初始值为true，代表前面是个空串，不影响题，是一个辅助
//		ret[0] = true;
//		//2、观察题找规律，得出题目结果的状态是什么？
//		for (int i = 1; i <= len; i++)
//		{
//			for (int j = i - 1; j >= 0; j--)
//			{
//				//3、状态转移方程：F[i]=F[i-1]&&s[j,i]能否在dict中被找到
//				//为什么要&&呢？
//				//原因是：当第i个判断是否能被分割时，F[i-1]如果是true，代表前面已经
//				//被分割成功，如果s[i-1,i]也能被分割，那么if内条件成立，如果F[i-1]是
//				//false，代表这一点前没有被分割成功，就算后面s[i-1,i]在dict里被找到，
//				//也不能说明F[i]此位置的子串能被dict完全分割
//				if (ret[j] && dict.find(s.substr(j, i - j)) != dict.end())
//				{
//					ret[i] = true;
//					break;
//				}
//			}
//		}
//		//4、返回值
//		return ret[len];
//	}
//};

//链接：https://www.nowcoder.com/questionTerminal/2b7995aa4f7949d99674d975489cb7da
//来源：牛客网
//
//给出一个三角形，计算从三角形顶部到底部的最小路径和，每一步都可以移动到下面一行相邻的数字，
//例如，给出的三角形如下：
//[↵[2], ↵[3, 4], ↵[6, 5, 7], ↵[4, 1, 8, 3]↵]
//最小的从顶部到底部的路径和是2 + 3 + 5 + 1 = 11。
//注意：
//如果你能只用O（N）的额外的空间来完成这项工作的话，就可以得到附加分，其中N是三角形中的行总数。
//class Solution {
//public:
//	int minimumTotal(vector<vector<int> > &triangle)
//	{
//		//初始化一个辅助数组
//		vector<vector<int>> MinPathSum(triangle);
//		//1、初始化值
//		MinPathSum[0][0] = triangle[0][0];
//		//2、状态，第i行j列数的最小路径和
//		int row = triangle.size();
//		for (int i = 1; i<row; i++)
//		{
//			//j行最多有i个数有效
//			for (int j = 0; j <= i; j++)
//			{
//				//3、状态转化方程：MinPathSum[i][j]=min(triangle里上一行到它的最小数与它的和)
//				//第一种情况，j=0，那上一行只有一个元素能到达它
//				if (j == 0)
//				{
//					MinPathSum[i][j] = MinPathSum[i - 1][0] + triangle[i][0];
//				}
//				//第二种情况：j=i,处于每行最后一个元素的位置，只有上一行的【i-1][j-1]可以到达
//				else if (i == j)
//				{
//					MinPathSum[i][j] = MinPathSum[i - 1][j - 1] + triangle[i][i];
//				}
//				//第三种情况：处于中间位置
//				else
//				{
//					MinPathSum[i][j] = min(MinPathSum[i - 1][j - 1], MinPathSum[i - 1][j]) + triangle[i][j];
//				}
//			}
//		}
//		int ret = MinPathSum[row - 1][0];
//		//这道题逻辑上row==col
//		for (int i = 1; i<row; i++)
//		{
//			ret = min(ret, MinPathSum[row - 1][i]);
//		}
//		//找到最小路径和，并返回
//		return ret;
//	}
//};


//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	vector<int> n(10);
//
//	//vector<vector<int>> grid(m, vector<int>(n, 1));
//
//}

//链接：https://www.nowcoder.com/questionTerminal/166eaff8439d4cd898e3ba933fbc6358?toCommentId=6179258
//来源：牛客网
//
//[编程题]unique - paths
//热度指数：11767时间限制：C / C++ 1秒，其他语言2秒空间限制：C / C++ 32M，其他语言64M
//算法知识视频讲解
//一个机器人在m×n大小的地图的左上角（起点，下图中的标记“start"的位置）。
//机器人每次向下或向右移动。机器人要到达地图的右下角。（终点，下图中的标记“Finish"的位置）。
//可以有多少种不同的路径从起点走到终点？
//class Solution {
//public:
//	/**
//	*
//	* @param m int整型
//	* @param n int整型
//	* @return int整型
//	*/
//	int uniquePaths(int m, int n)
//	{
//		//1、初始化一个二维数组，将数组内元素都置为1
//		//因为第一行和第一列走到所有位置的路径只有一条（只能向下，向右走）
//		vector<vector<int>> grid(m, vector<int>(n, 1));
//		//2、状态：gird[i][j]；代表从grid[0][0]走到i,j位置的路径总数
//		//3、状态转移方程：grid[i][j]=grid[i-1][j]+grid[i][j-1]
//		//因为只能向下、向右走
//		for (int i = 1; i<m; i++)
//		{
//			for (int j = 1; j<n; j++)
//			{
//				grid[i][j] = grid[i - 1][j] + grid[i][j - 1];
//			}
//		}
//		//4、返回值：到达finish位置，grid[m-1][n-1]
//		return grid[m - 1][n - 1];
//	}
//};

//链接：https://www.nowcoder.com/questionTerminal/3cdf08dd4e974260921b712f0a5c8752
//来源：牛客网
//
//unique - paths - ii
//热度指数：11507时间限制：C / C++ 1秒，其他语言2秒空间限制：C / C++ 32M，其他语言64M
//算法知识视频讲解
//继续思考题目"Unique Paths":
//如果在图中加入了一些障碍，有多少不同的路径？
//分别用0和1代表空区域和障碍
//例如
//下图表示有一个障碍在3 * 3的图中央。
//[↵[0, 0, 0], ↵[0, 1, 0], ↵[0, 0, 0]↵] 
//有2条不同的路径
//备注：m和n不超过100.
//class Solution {
//public:
//	/**
//	*
//	* @param obstacleGrid int整型vector<vector<>>
//	* @return int整型
//	*/
//	int uniquePathsWithObstacles(vector<vector<int> >& obstacleGrid)
//	{
//		if (obstacleGrid.empty())
//		{
//			return 0;
//		}
//		//先申请一个和obstacleGrid大小一致的数组，并全置0；用这个数组存储路径数
//		int m = obstacleGrid.size();
//		int n = obstacleGrid[0].size();
//		vector<vector<int>> PathSum(m, vector<int>(n, 0));
//		//1、初始化边界，将第一行和第一列到达各元素的路径数存储起来
//		for (int i = 0; i<m; i++)
//		{
//			//如果元素[i][0]位置有障碍，那么此元素和它之后的都走不通
//			if (obstacleGrid[i][0] == 1)
//				break;
//			PathSum[i][0] = 1;
//		}
//		for (int i = 0; i<n; i++)
//		{
//			//如果元素[0][i]位置有障碍，那么此元素和它之后的都走不通
//			if (obstacleGrid[0][i] == 1)
//				break;
//			PathSum[0][i] = 1;
//		}
//		//2、状态PathSum[i][j]:代表走到[i][j]位置的路径总数
//		//3、状态转移方程：F[i][j]=F[i-1][j]+F[i][j-1];
//		//        if(此位置不通)F[i][j]=0
//		for (int i = 1; i<m; i++)
//		{
//			for (int j = 1; j<n; j++)
//			{
//				if (obstacleGrid[i][j] == 1)
//				{
//					PathSum[i][j] = 0;
//				}
//				else
//				{
//					PathSum[i][j] = PathSum[i - 1][j] + PathSum[i][j - 1];
//				}
//			}
//		}
//		//4、返回值
//		return PathSum[m - 1][n - 1];
//	}
//};



#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int m, n;
	cin >> m >> n;
	vector<vector<int>> arr(m, vector<int>(n));
	for (int i = 0; i<m; i++)
	{
		vector<int> val;
		for (int j = 0; j<n; j++)
		{
			cin >> arr[i][j];
		}
	}
	cin.get();
	return 0;
}