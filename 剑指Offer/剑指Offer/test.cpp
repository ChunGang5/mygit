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