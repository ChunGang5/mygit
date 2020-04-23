#include <stdio.h>
#include <stdlib.h>
#include<string>
using namespace std;
int main()
{
	int num = 121;
	string str;

}

//203：移除链表值为val的节点
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


//225：用队列实现栈
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

//232：用栈实现队列
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
		//直接标记队头元素，后面会很方便
		if (s1.empty())
		{
			front = x;
		}
		while (!s1.empty())     //如果s1为空，会直接将x放入s2中，然后再倒给s1，不怕x没入栈
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
			if (!s1.empty())     //删除队头元素之后要相应的改变标识front，这儿需要再次判断栈是否为空，防止越界
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
		//s2只是辅助栈，每次push元素完，s2都会清空了，不用判断s2
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