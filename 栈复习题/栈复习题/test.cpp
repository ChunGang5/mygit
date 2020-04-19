//左右括号匹配leetcode 20
/*
class Solution {
public:
	bool isValid(string s)
	{
		stack<char> stk;
		for (int i = 0; i<s.size(); i++)
		{
			//善于利用continue
			if (s[i] == ' ')
			{
				continue;
			}
			if (s[i] == '(' || s[i] == '[' || s[i] == '{')
			{
				stk.push(s[i]);
				continue;
			}
			//如果刚开始是一个右括号，就进不来，直接false
			//如果匹配了直接就continue，不然就会直接false，这道题continue真的太妙了
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
			//如果
			return false;
		}

		return 0 == stk.size();   //防止出现只有一个左括号的情况
	}
};*/

