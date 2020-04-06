//01删除链表滞位val的元素
/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/
//class Solution {
//public:
//	ListNode* removeElements(ListNode* head, int val)
//	{
//		ListNode*cur = head;      //cur就是链表的第一个节点，不采用哨兵法
//		ListNode* perv = NULL;
//		while (cur)
//		{
//			if (cur->val == val)
//			{
//				if (cur == head)
//				{
//					head = cur->next;
//					delete cur;
//					cur = head;
//				}
//				else
//				{
//					perv->next = cur->next;
//					delete cur;
//					cur = perv->next;
//				}
//			}
//			else
//			{
//				perv = cur;   //标记cur的前一个位置，因为删除cur的时候会用
//				cur = cur->next;
//			}
//		}
//		return head;
//	}
//};


//02反转链表，三指针法
/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/
//class Solution {
//public:
//	ListNode* reverseList(ListNode* head)
//	{
//		ListNode* prev = NULL;
//		ListNode* cur = head;
//		ListNode* next = NULL;    //标识当前节点的下一个节点，不然当前节点反转之后就找不到原来的下一个节点了
//		while (cur)
//		{
//			next = cur->next;
//			cur->next = prev;
//			prev = cur;
//			cur = next;
//		}
//		return prev;
//	}
//};

//头插法
//class Solution {
//public:
//	ListNode* reverseList(ListNode* head)
//	{
//		ListNode* Newhead = NULL;
//		ListNode* cur = head;
//		while (cur)
//		{
//			head = cur->next;
//			cur->next = Newhead;
//			Newhead = cur;
//			cur = head;
//		}
//		return Newhead;
//	}
//};

//03链表中间节点
/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) 
//     {
//         ListNode* fast=head;    //快指针，一次走两步
//         ListNode* slow=head;    //慢指针，一次走一步
//         while(fast!=NULL&&fast->next!=NULL)     //先判断fast,如果fast不为NULL才能执行fast->next,不然程序就崩了
//                                                 //逻辑也不通
//         {
//             fast=fast->next->next;
//             slow=slow->next;
//         }
//         return slow;
//     }
// };


//修改了问题，如果是偶数找出其两个中间数
//class Solution {
//public:
//	ListNode* middleNode(ListNode* head)
//	{
//		ListNode* fast = head;    //快指针，一次走两步
//		ListNode* slow = head;    //慢指针，一次走一步
//		ListNode* PervSlow = NULL;    //slow指针的前一个
//		while (fast != NULL&&fast->next != NULL)     //先判断fast,如果fast不为NULL才能执行fast->next,不然程序就崩了
//			//逻辑也不通
//		{
//			fast = fast->next->next;
//			PervSlow = slow;
//			slow = slow->next;
//		}
//		if (fast == NULL)  //偶数
//		{
//			// return PervSlow;
//			return slow;
//		}
//		if (fast->next == NULL)    //奇数
//		{
//			return slow;
//		}
//	}
//};

//链表中倒数第k个节点
/*
struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) :
val(x), next(NULL) {
}
};*/
//class Solution {
//public:
//	ListNode* FindKthToTail(ListNode* pListHead, unsigned int k)
//	{
//		ListNode* cur = pListHead;
//		int count = 0;
//		while (cur)
//		{
//			count++;
//			cur = cur->next;
//		}
//		int n = count - k;
//		cur = pListHead;
//		for (int i = 0; i<n; i++)
//		{
//			cur = cur->next;
//		}
//		if (k>count)
//		{
//			return NULL;
//		}
//		else
//		{
//			return cur;
//		}
//	}
//};


//判断链表是否带环
/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/
//class Solution {
//public:
//	bool hasCycle(ListNode *head)
//	{
//		ListNode* fast = head;    //一次走两部
//		ListNode* slow = head;    //一次走一步
//		while (fast&&fast->next)     //如果不带环，快指针先走到末尾
//		{
//			fast = fast->next->next;
//			slow = slow->next;
//			if (slow == fast)
//			{
//				return true;
//			}
//		}
//		return false;   //不能放在循环体内判断不相等的情况，不然大部分情况下一定是false
//	}
//};