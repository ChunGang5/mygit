//��������ƥ��leetcode 20
/*
class Solution {
public:
	bool isValid(string s)
	{
		stack<char> stk;
		for (int i = 0; i<s.size(); i++)
		{
			//��������continue
			if (s[i] == ' ')
			{
				continue;
			}
			if (s[i] == '(' || s[i] == '[' || s[i] == '{')
			{
				stk.push(s[i]);
				continue;
			}
			//����տ�ʼ��һ�������ţ��ͽ�������ֱ��false
			//���ƥ����ֱ�Ӿ�continue����Ȼ�ͻ�ֱ��false�������continue���̫����
			if (stk.size()>0)
			{
				if (s[i] == ')'&&stk.top() == '(')
				{
					stk.pop();
					continue;
				}
				if (s[i] == ']'&&stk.top() == '[')
				{
					stk.pop();
					continue;
				}
				if (s[i] == '}'&&stk.top() == '{')
				{
					stk.pop();
					continue;
				}
			}
			//���
			return false;
		}

		return 0 == stk.size();   //��ֹ����ֻ��һ�������ŵ����
	}
};*/

