//ɾ��������λval��Ԫ��
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


//��ת������ָ�뷨
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