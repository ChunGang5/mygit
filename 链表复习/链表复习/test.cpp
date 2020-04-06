//01ɾ��������λval��Ԫ��
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
//		ListNode*cur = head;      //cur��������ĵ�һ���ڵ㣬�������ڱ���
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
//				perv = cur;   //���cur��ǰһ��λ�ã���Ϊɾ��cur��ʱ�����
//				cur = cur->next;
//			}
//		}
//		return head;
//	}
//};


//02��ת������ָ�뷨
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
//		ListNode* next = NULL;    //��ʶ��ǰ�ڵ����һ���ڵ㣬��Ȼ��ǰ�ڵ㷴ת֮����Ҳ���ԭ������һ���ڵ���
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

//ͷ�巨
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

//03�����м�ڵ�
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
//         ListNode* fast=head;    //��ָ�룬һ��������
//         ListNode* slow=head;    //��ָ�룬һ����һ��
//         while(fast!=NULL&&fast->next!=NULL)     //���ж�fast,���fast��ΪNULL����ִ��fast->next,��Ȼ����ͱ���
//                                                 //�߼�Ҳ��ͨ
//         {
//             fast=fast->next->next;
//             slow=slow->next;
//         }
//         return slow;
//     }
// };


//�޸������⣬�����ż���ҳ��������м���
//class Solution {
//public:
//	ListNode* middleNode(ListNode* head)
//	{
//		ListNode* fast = head;    //��ָ�룬һ��������
//		ListNode* slow = head;    //��ָ�룬һ����һ��
//		ListNode* PervSlow = NULL;    //slowָ���ǰһ��
//		while (fast != NULL&&fast->next != NULL)     //���ж�fast,���fast��ΪNULL����ִ��fast->next,��Ȼ����ͱ���
//			//�߼�Ҳ��ͨ
//		{
//			fast = fast->next->next;
//			PervSlow = slow;
//			slow = slow->next;
//		}
//		if (fast == NULL)  //ż��
//		{
//			// return PervSlow;
//			return slow;
//		}
//		if (fast->next == NULL)    //����
//		{
//			return slow;
//		}
//	}
//};

//�����е�����k���ڵ�
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


//�ж������Ƿ����
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
//		ListNode* fast = head;    //һ��������
//		ListNode* slow = head;    //һ����һ��
//		while (fast&&fast->next)     //�������������ָ�����ߵ�ĩβ
//		{
//			fast = fast->next->next;
//			slow = slow->next;
//			if (slow == fast)
//			{
//				return true;
//			}
//		}
//		return false;   //���ܷ���ѭ�������жϲ���ȵ��������Ȼ�󲿷������һ����false
//	}
//};