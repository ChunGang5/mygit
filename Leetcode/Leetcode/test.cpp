#include <stdio.h>
#include <stdlib.h>
#include<string>
using namespace std;
int main()
{
	int num = 121;
	string str;

}
/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/


struct ListNode* removeElements(struct ListNode* head, int val){
	if (!head)
	{
		return NULL;
	}
	while (head != NULL && head->val)
	{
		head = head->next;
	}
	ListNode prev = head;
	if (prev != NULL)
	{
		while (prev->next != NULL)
		{
			if (prev->next->val == val)
			{
				prev->next = prev->next->next;
			}
			else
			{
				prev = prev->next;
			}
		}
	}
	return head;
}
////整数反转
//int main()
//{
//	int a = 123;
//	int i = 0;
//	while (a)
//	{
//		i = i * 10 + a % 10;
//		a = a / 10;
//	}
//	if (i<INT_MAX&&i>INT_MIN)
//	{
//		printf("%d\n", i);
//	}
//	
//	system("pause");
//	return 0;
//}