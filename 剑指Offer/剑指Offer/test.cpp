//10��쳲���������_�ǵݹ��󷨣�O(n)
//class Solution {
//public:
//	int Fibonacci(int n)
//	{
//		if (n == 0)
//		{
//			return 0;
//		}
//		if (n == 1)
//		{
//			return 1;
//		}
//		long long fibone = 0;
//		long long fibtwo = 1;
//		long long fibn = 0;
//		for (int i = 2; i <= n; i++)
//		{
//			fibn = fibtwo + fibone;
//			fibone = fibtwo;
//			fibtwo = fibn;
//		}
//		return fibn;
//	}
//};

//��չ��������̨������
//�����ܵ�һ����һ�ڵ�ʱ�򣬻�Ҫf(n-1)����������һ������2��ʱ��ʣ����f(n-2)������
//class Solution {
//public:
//	int jumpFloor(int number) {
//		if (number == 1)
//		{
//			return 1;
//		}
//		if (number == 2)
//		{
//			return 2;
//		}
//		else
//		{
//			return jumpFloor(number - 1) + jumpFloor(number - 2);
//		}
//	}
//};

//�ǵݹ�
//class Solution {
//public:
//	int jumpFloor(int number)
//	{
//		if (number == 1)
//		{
//			return 1;
//		}
//		if (number == 2)
//		{
//			return 2;
//		}
//		long long jumpone = 1;
//		long long jumptwo = 2;
//		long long jumpN = 0;
//		for (int i = 2; i<number; i++)	//ע��������Ӧ��쳲����������Ǵ�1��ʼ�ģ�����i����=n
//		{
//			jumpN = jumpone + jumptwo;
//			jumpone = jumptwo;
//			jumptwo = jumpN;
//		}
//		return jumpN;
//	}
//};

//04:��ά�����еĲ���
//class Solution {
//public:
//	//����ֻ�ܴ����½ǻ������Ͻ���⣬��Ȼ�Ļ��ͻ�����жϵĲ�ȷ��
//	bool Find(int target, vector<vector<int> > array) {
//		int rowCount = array.size();
//		int colCount = array[0].size();
//		int row = 0;
//		int col = colCount - 1;
//		bool found = false;    //��־����Ҫ
//		if (rowCount>0 && colCount>0)    //�ж������Ƿ���Ч
//		{
//			while (row<rowCount && col >= 0)    //�ж������Ƿ�Խ��
//			{
//				if (target == array[row][col])
//				{
//					found = true;
//					break;
//				}
//				else if (target < array[row][col])
//				{
//					--col;
//				}
//				else
//					++row;
//			}
//		}
//		return found;
//	}
//};

//05���滻�ո�
//class Solution {
//public:
//	void replaceSpace(char *str, int length)
//	{
//		if (NULL == str || length <= 0)
//		{
//			return;
//		}
//		int OldLength = 0;
//		int NumberBlank = 0;
//		int i = 0;
//		//ͳ���ַ��������Ϳո����
//		while (str[i] != '\0')
//		{
//			OldLength++;
//			if (str[i] == ' ')
//				NumberBlank++;
//			i++;
//		}
//		int NewLength = OldLength + 2 * NumberBlank;
//		if (NewLength>length)    //length���ַ��������������NewLength>length��ô�Ͳ��ܽ����滻�ˣ�����������
//			return;
//		//��ʼ�滻
//		int IndexOld = OldLength;
//		int IndexNew = NewLength;
//		while (IndexOld >= 0 && IndexNew>IndexOld)    //>=0����Ϊ�ַ�����һ���ַ��±���0�����ԭ�ַ���û�пո�
//			//��Indexold==IndexNew�Ͳ��ô�����û��<������
//		{
//			if (str[IndexOld] == ' ')
//			{
//				str[IndexNew--] = '0';    //����--�����ú��
//				str[IndexNew--] = '2';
//				str[IndexNew--] = '%';
//				//IndexOld--;
//			}
//			else
//			{
//				//str[IndexNew--]=str[IndexOld--];
//				str[IndexNew--] = str[IndexOld];
//			}
//			IndexOld--;    //��������ı�IndexOld�ȽϷ��㣬��Ϊÿ��IndexOld����Ҫ��ǰ��һ��
//		}
//	}
//};

//06�������ӡ����
//����һ��ջ
//class Solution {
//public:
//	vector<int> printListFromTailToHead(ListNode* head)
//	{
//		vector<int> value;
//		std::stack<ListNode*> nodes;
//		ListNode* cur = head;
//		while (cur)
//		{
//			nodes.push(cur);
//			cur = cur->next;
//		}
//		while (!nodes.empty())
//		{
//			cur = nodes.top();
//			value.push_back(cur->val);
//			nodes.pop();
//		}
//		return value;
//	}
//};
//���������ݹ�˼·
//class Solution {
//public:
//	vector<int> value;    //����Ҫ�ں����ⶨ�壬��Ȼ�ͻ�ݹ鼸�����ɼ�������
//	vector<int> printListFromTailToHead(ListNode* head)
//	{
//		ListNode* cur = head;
//		if (cur)
//		{
//			if (cur->next)    //������һ���ڵ��Ƿ�Ϊ�գ�����ǵݹ������
//			{
//				printListFromTailToHead(cur->next);
//			}
//			value.push_back(cur->val);
//		}
//		return value;
//	}
//};
//����������������
//class Solution {
//public:
//
//	vector<int> printListFromTailToHead(ListNode* head)
//	{
//		vector<int> value;
//		ListNode* cur = head;
//		while (cur)
//		{
//			value.push_back(cur->val);
//			cur = cur->next;
//		}
//		reverse(value.begin(), value.end());
//		return value;
//	}
//};

//09��������ջʵ�ֶ���
//class Solution
//{
//public:
//	void push(int node)
//	{
//		//ֱ����push��ʱ��ͽ������д���ã�stack2ֻ��һ����������
//		while (!stack1.empty())
//		{
//			stack2.push(stack1.top());
//			stack1.pop();
//		}
//		stack2.push(node);
//		while (!stack2.empty())
//		{
//			stack1.push(stack2.top());
//			stack2.pop();
//		}
//	}
//
//	int pop()
//	{
//		int value = stack1.top();
//		stack1.pop();
//		return value;
//	}
//
//private:
//	stack<int> stack1;
//	stack<int> stack2;
//};


#include<iostream>
using namespace std;

int main()
{
	
	cin.get();
	return 0;
}