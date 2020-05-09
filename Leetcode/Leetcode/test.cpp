#include <stdio.h>
#include <stdlib.h>
#include<string>
using namespace std;
int main()
{
	int num = 121;
	string str;

}

//203���Ƴ�����ֵΪval�Ľڵ�
/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/
//struct ListNode* removeElements(struct ListNode* head, int val){
//	if (!head)
//	{
//		return NULL;
//	}
//	while (head != NULL && head->val)
//	{
//		head = head->next;
//	}
//	ListNode prev = head;
//	if (prev != NULL)
//	{
//		while (prev->next != NULL)
//		{
//			if (prev->next->val == val)
//			{
//				prev->next = prev->next->next;
//			}
//			else
//			{
//				prev = prev->next;
//			}
//		}
//	}
//	return head;
//}


//225���ö���ʵ��ջ
/*
class MyStack {
public:
	queue<int> q1, q2;
	/** Initialize your data structure here. */
	MyStack() {

	}

	/** Push element x onto stack. */
	void push(int x) {
		if (q1.empty())
		{
			q2.push(x);
			return;
		}
		if (q2.empty())
		{
			q1.push(x);
			return;
		}
	}

	/** Removes the element on top of the stack and returns that element. */
	int pop() {
		int ret;
		if (q1.empty())
		{
			if (q2.size() == 1)
			{
				ret = q2.front();
				q2.pop();
				return ret;
			}
			else
			{
				while (q2.size()>1)
				{
					q1.push(q2.front());
					q2.pop();
				}
				ret = q2.front();
				q2.pop();
				return ret;
			}
		}

		if (q2.empty())
		{
			if (q1.size() == 1)
			{
				ret = q1.front();
				q1.pop();
				return ret;
			}
			else
			{
				while (q1.size()>1)
				{
					q2.push(q1.front());
					q1.pop();
				}
				ret = q1.front();
				q1.pop();
				return ret;
			}
		}
		return 0;
	}

	/** Get the top element. */
	int top()
	{
		if (q1.empty())
		{
			return q2.back();
		}
		else
			return q1.back();
	}

	/** Returns whether the stack is empty. */
	bool empty() {
		return q1.empty() && q2.empty();
	}
};*/

/**
* Your MyStack object will be instantiated and called as such:
* MyStack* obj = new MyStack();
* obj->push(x);
* int param_2 = obj->pop();
* int param_3 = obj->top();
* bool param_4 = obj->empty();
*/

//232����ջʵ�ֶ���
class MyQueue {

	stack<int> s1, s2;
	int front;
public:
	/** Initialize your data structure here. */
	MyQueue() {

	}

	/** Push element x to the back of queue. */
	void push(int x)
	{
		//ֱ�ӱ�Ƕ�ͷԪ�أ������ܷ���
		if (s1.empty())
		{
			front = x;
		}
		while (!s1.empty())     //���s1Ϊ�գ���ֱ�ӽ�x����s2�У�Ȼ���ٵ���s1������xû��ջ
		{
			s2.push(s1.top());
			s1.pop();
		}
		s2.push(x);
		while (!s2.empty())
		{
			s1.push(s2.top());
			s2.pop();
		}
	}

	/** Removes the element from in front of queue and returns that element. */
	int pop()
	{
		int ret;
		if (!s1.empty())
		{
			ret = s1.top();
			s1.pop();
			if (!s1.empty())     //ɾ����ͷԪ��֮��Ҫ��Ӧ�ĸı��ʶfront�������Ҫ�ٴ��ж�ջ�Ƿ�Ϊ�գ���ֹԽ��
			{
				front = s1.top();
			}
			else
			{
				front = 0;
			}
			return ret;
		}
		else
		{
			return 0;
		}
	}

	/** Get the front element. */
	int peek()
	{
		return front;
	}

	/** Returns whether the queue is empty. */
	bool empty()
	{
		//s2ֻ�Ǹ���ջ��ÿ��pushԪ���꣬s2��������ˣ������ж�s2
		return s1.empty();
	}
};

/**
* Your MyQueue object will be instantiated and called as such:
* MyQueue* obj = new MyQueue();
* obj->push(x);
* int param_2 = obj->pop();
* int param_3 = obj->peek();
* bool param_4 = obj->empty();
*/




//144����������ǰ�����
/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/

//����һ���ݹ鷨
//class Solution {
//public:
//	vector<int> value;
//	vector<int> preorderTraversal(TreeNode* root)
//	{
//		if (NULL != root)
//		{
//			value.push_back(root->val);
//			preorderTraversal(root->left);
//			preorderTraversal(root->right);
//		}
//		return value;
//	}
//};

//��������ջ
//class Solution {
//public:
//	vector<int> value;
//	vector<int> preorderTraversal(TreeNode* root)
//	{
//		stack<TreeNode*> TreeStack;
//		if (root)
//		{
//			TreeStack.push(root);
//		}
//		while (!TreeStack.empty())
//		{
//			TreeNode* cur = TreeStack.top();
//			value.push_back(cur->val);
//			TreeStack.pop();
//			//��push�Һ��ӣ���push���ӣ�����top��ʱ��ͷ��ϸ����ң�������ȱ���
//			if (cur->right != NULL)
//			{
//				TreeStack.push(cur->right);
//			}
//			if (cur->left != NULL)
//			{
//				TreeStack.push(cur->left);
//			}
//		}
//		return value;
//	}
//};

//100����ͬ����
/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/
//class Solution {
//public:
//	bool isSameTree(TreeNode* p, TreeNode* q)
//	{
//		if (NULL == p&&NULL == q)
//		{
//			return true;
//		}
//		//��һ���Ѿ��ж�����������Ϊ�յ�����ˣ���һ�����ж�һ����Ϊ�յ����
//		if (NULL == p || NULL == q)
//		{
//			return false;
//		}
//		return p->val == q->val&&isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
//	}
//};

//101. �Գƶ�����
/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/

//����һ���ݹ�
//class Solution {
//public:
//	bool isSameTree(TreeNode* p, TreeNode* q)
//	{
//		if (NULL == p&&NULL == q)
//		{
//			return true;
//		}
//		//��һ���Ѿ��ж�����������Ϊ�յ�����ˣ���һ�����ж�һ����Ϊ�յ����
//		if (NULL == p || NULL == q)
//		{
//			return false;
//		}
//		return p->val == q->val&&isSameTree(p->left, q->right) && isSameTree(p->right, q->left);
//	}
//	bool isSymmetric(TreeNode* root)
//	{
//		if (NULL == root)
//		{
//			return true;
//		}
//		return isSameTree(root->left, root->right);
//	}
//};
//���������ö��е���
//class Solution {
//public:
//	bool isSymmetric(TreeNode* root)
//	{
//		queue<TreeNode*> Left;
//		queue<TreeNode*> Right;
//		if (root)
//		{
//			Left.push(root->left);
//			Right.push(root->right);
//		}
//		while (!Left.empty() && !Right.empty())
//		{
//			TreeNode* Lcur = Left.front();
//			TreeNode* Rcur = Right.front();
//			if (Lcur == NULL&&Rcur == NULL)
//			{
//				continue;
//			}
//			if (Lcur == NULL || Rcur == NULL)
//			{
//				return false;
//			}
//			if (Lcur->val != Rcur->val)
//			{
//				return false;
//			}
//			Left.push(Lcur->left);
//			Left.push(Lcur->right);
//			Right.push(Rcur->right);
//			Right.push(Rcur->left);
//			Left.pop();
//			Right.pop();
//		}
//		return true;
//	}
//};

//94��94. ���������������
/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/
//����һ���ݹ�
//class Solution {
//public:
//	vector<int> value;
//	vector<int> inorderTraversal(TreeNode* root)
//	{
//		if (root)
//		{
//			inorderTraversal(root->left);
//			value.push_back(root->val);
//			inorderTraversal(root->right);
//		}
//		return value;
//	}
//};

//class Solution {
//public:
//	vector<int> value;
//	vector<int> inorderTraversal(TreeNode* root)
//	{
//		stack<TreeNode*> s;
//		if (root)
//		{
//			s.push(root);
//		}
//		while (!s.empty())
//		{
//			while (root)
//			{
//				s.push(root);
//				root = root->left;
//			}
//			s.pop();
//			root = s.top();
//			value.push_back(root->val);
//			root = root->right;
//		}
//		return value;
//	}
//};

//104. ��������������
/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/
//class Solution {
//public:
//	int maxDepth(TreeNode* root)
//	{
//		if (NULL == root)
//		{
//			return 0;
//		}
//		int LeftDepth = maxDepth(root->left);
//		int RigthDepth = maxDepth(root->right);
//		return LeftDepth >= RigthDepth ? LeftDepth + 1 : RigthDepth + 1;
//	}
//};

//�������Ĺ����Լ�����
//#include<iostream>
//#include<string>
//using namespace std;
//struct TreeNode {
//	char val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(char x) : val(x), left(NULL), right(NULL) {}
//};
//int i = 0;
//string s;
//TreeNode* CreateTree()
//{
//	char c = s[i++];
//	if (c == '#')
//		return NULL;
//	TreeNode* root = new TreeNode(c);
//	root->left = CreateTree();
//	root->right = CreateTree();
//	return root;
//}
//void DelTree(TreeNode* root)
//{
//	if (root)
//	{
//		if (root->left != NULL)
//		{
//			DelTree(root->left);
//			root->left = NULL;
//		}
//		if (root->right != NULL)
//		{
//			DelTree(root->right);
//			root->right = NULL;
//		}
//	}
//	delete root;
//}
//void inOrderTraversal(TreeNode* root)
//{
//	if (root)
//	{
//		inOrderTraversal(root->left);
//		cout << root->val << " ";
//		inOrderTraversal(root->right);
//	}
//}
//int main()
//{
//
//	while (cin >> s)
//	{
//		i = 0;
//		TreeNode* root = CreateTree();
//		inOrderTraversal(root);
//		cout << endl;
//		DelTree(root);
//	}
//	return 0;
//}

//606. ���ݶ����������ַ���
/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/
//class Solution {
//public:
//	string tree2str(TreeNode* t)
//	{
//		if (t == NULL)
//		{
//			return "";
//		}
//		if (t->left == NULL&&t->right == NULL)
//		{
//			return to_string(t->val) + "";
//		}
//		//��ĿҪ��ֻ��������Ϊ�յ�ʱ��ӿ����ţ�������Ϊ�ղ���
//		if (t->right == NULL)
//		{
//			return to_string(t->val) + "(" + tree2str(t->left) + ")";
//		}
//		//���ڵ㡢�������������ڵ����
//		return to_string(t->val) + "(" + tree2str(t->left) + ")(" + tree2str(t->right) + ")";
//	}
//};

//102. �������Ĳ������
/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/
//class Solution {
//public:
//	vector<vector<int>> levelOrder(TreeNode* root)
//	{
//		//��������˼�ǽ��������Ľ�������Ž���ά������
//		vector<vector<int>> value;
//		queue<TreeNode*> qu;
//		if (NULL == root)
//		{
//			return value;
//		}
//		qu.push(root);
//		while (!qu.empty())
//		{
//			vector<int> temp;
//			//֪���������м���Ԫ�أ���Ҫ�����Σ���Ž�������ҳ�������һ�������Ԫ��
//			int len = qu.size();
//			for (int i = 0; i<len; i++)
//			{
//				TreeNode* cur = qu.front();
//				qu.pop();
//				temp.push_back(cur->val);
//				if (cur->left)
//				{
//					qu.push(cur->left);
//				}
//				if (cur->right)
//				{
//					qu.push(cur->right);
//				}
//			}
//			//������һ���Ժ󽫽�������ά������
//			value.push_back(temp);
//		}
//		return value;
//	}
//};

//105. ��ǰ��������������й��������
/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/
//class Solution {
//public:
//	TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder)
//	{
//		return pre_order(0, preorder.size() - 1, 0, inorder.size() - 1, preorder, inorder);
//	}
//	TreeNode* pre_order(int leftpre, int rightpre, int leftin, int rightin, vector<int> &pre, vector<int> &in)
//	{
//		if (leftpre>rightpre || leftin>rightin)
//		{
//			return NULL;
//		}
//		TreeNode* root = new TreeNode(pre[leftpre]);
//		int rootin = leftin;
//		while (rootin <= rightin&&in[rootin] != pre[leftpre])
//		{
//			rootin++;
//		}
//		int gap = rootin - leftin;
//		root->left = pre_order(leftpre + 1, leftpre + gap, leftin, rootin - 1, pre, in);
//		root->right = pre_order(leftpre + gap + 1, rightpre, rootin + 1, rightin, pre, in);
//		return root;
//	}
//};

//106. �����������������й��������
/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/
//class Solution {
//public:
//	TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder)
//	{
//		return in_post(0, inorder.size() - 1, 0, postorder.size() - 1, inorder, postorder);
//	}
//	TreeNode* in_post(int leftin, int rightin, int leftpost, int rightpost, vector<int> &in, vector<int> &post)
//	{
//		if (leftin>rightin || leftpost>rightpost)
//		{
//			return NULL;
//		}
//		TreeNode* root = new TreeNode(post[rightpost]);
//		int rootin = leftin;
//		while (rootin <= rightin&&post[rightpost] != in[rootin])
//		{
//			rootin++;
//		}
//		int gap = rootin - leftin;
//		root->left = in_post(leftin, rootin - 1, leftpost, leftpost + gap - 1, in, post);
//		root->right = in_post(rootin + 1, rightin, leftpost + gap, rightpost - 1, in, post);
//		return root;
//	}
//};

