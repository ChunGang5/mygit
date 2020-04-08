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

//������  ˫ָ�뷨
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
//		if (pListHead == NULL || k == 0)    //�ж������Ƿ�Ϊ�գ�����k�Ĳ���ȷ�����k=0�������������û�а�
//		{
//			return NULL;
//		}
//		ListNode *cur = pListHead;
//		ListNode *last = pListHead;
//		while (k--)    //k<0�������ѭ����������ȥ��������������һ��bug��
//		{
//			if (last == NULL)
//			{
//				return NULL;
//			}
//			else
//			{
//				last = last->next;
//			}
//		}
//		while (last)
//		{
//			cur = cur->next;
//			last = last->next;
//		}
//		return cur;
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


//�ϲ�������������
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
//	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
//	{
//		ListNode* cur1 = l1;
//		ListNode* cur2 = l2;
//		ListNode* newhead = NULL;
//		ListNode* tail = NULL;    //��ʶ���������һ���ڵ�
//		if (l1 == NULL)    //�ȸ�һ��ͷ�ڵ�
//			return l2;
//		if (l2 == NULL)
//			return l1;
//		if (cur1->val <= cur2->val)
//		{
//			newhead = cur1;
//			cur1 = cur1->next;
//		}
//		else{
//			newhead = cur2;
//			cur2 = cur2->next;
//		}
//		tail = newhead;
//		while (cur1&&cur2)
//		{
//			if (cur1->val <= cur2->val)
//			{
//				tail->next = cur1;
//				cur1 = cur1->next;
//			}
//			else
//			{
//				tail->next = cur2;
//				cur2 = cur2->next;
//			}
//			tail = tail->next;
//		}
//		//������һ���������������
//		if (cur1 == NULL)
//			tail->next = cur2;
//		if (cur2 == NULL)
//			tail->next = cur1;
//		return newhead;
//	}
//};

 
//����ָ--ע�����⣬x��������ԭ�еĽڵ�ֵ��ֻ�Ǹ���һ��ֵ����
/*
struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) : val(x), next(NULL) {}
};*/
//class Partition {
//public:
//	ListNode* partition(ListNode* pHead, int x) {
//		ListNode BigHead(0);    //������е�ֲ�����Ҫ�ýṹ���ʼ���Ų�����
//		ListNode LittleHead(0);
//		ListNode* BigTird = &BigHead;
//		ListNode* LittleTird = &LittleHead;
//		ListNode* cur = pHead;
//		if (pHead == NULL)
//		{
//			return NULL;
//		}
//		while (cur)
//		{
//			if (cur->val<x)
//			{
//				LittleTird->next = cur;
//				LittleTird = cur;
//			}
//			else
//			{
//				BigTird->next = cur;
//				BigTird = cur;
//			}
//			cur = cur->next;
//		}
//		LittleTird->next = BigHead.next;
//		BigTird->next = NULL;    //������ĩβҪָ��NULL����Ȼ�Ͳ��������ͻ��ҷ��ʣ�����
//		return LittleHead.next;    //��Ϊ���������ͷ�ڵ�ŵ�������0
//	}
//};


//��������
/*
struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) : val(x), next(NULL) {}
};*/
//class PalindromeList {
//public:
//	bool chkPalindrome(ListNode* A) {
//		int array[900] = { 0 };
//		int size = 0;
//		ListNode* cur = A;
//		while (cur)
//		{
//			array[size++] = cur->val;
//			cur = cur->next;
//		}
//		int left = 0;
//		int right = size - 1;
//		while (left < right)
//		{
//			if (array[left] != array[right])
//			{
//				return false;
//			}
//			left++;
//			right--;
//		}
//		return true;
//	}
//};


//�ཻ����ĵ�һ���ڵ�
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
//	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
//	{
//		if (NULL == headA || NULL == headB)    //����������һ��Ϊ�գ���Ϊ��
//		{
//			return NULL;
//		}
//		ListNode* curA = headA;
//		ListNode* curB = headB;
//		int sizeA = 0;
//		int sizeB = 0;
//		while (curA)
//		{
//			sizeA++;
//			curA = curA->next;
//		}
//		while (curB)
//		{
//			sizeB++;
//			curB = curB->next;
//		}
//
//		if (curB != curA)      //��������Ϊ�գ������ཻ
//			return NULL;
//
//		int n = sizeA - sizeB;
//		//����A��B��n���ڵ㣬���ȱ���n��
//		curA = headA;
//		curB = headB;
//		if (n>0)
//		{
//			while (n--)
//			{
//				curA = curA->next;
//			}
//
//		}
//		else    //B��A��
//		{
//			while (n++)
//			{
//				curB = curB->next;
//			}
//		}
//		while (curA != curB)
//		{
//			curA = curA->next;
//			curB = curB->next;
//		}
//		return curA;
//	}
//};


//���������뻷�ĵ�һ���ڵ�
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
//	ListNode *detectCycle(ListNode *head)
//	{
//		ListNode* fast = head;
//		ListNode* slow = head;
//		bool Is = false;
//		while (fast&&fast->next)
//		{
//			fast = fast->next->next;
//			slow = slow->next;
//			if (fast == slow)
//			{
//				Is = true;
//				break;
//			}
//		}
//		if (!Is)
//		{
//			return NULL;
//		}
//		ListNode* PM = slow;
//		ListNode* PH = head;
//		while (PH != PM)
//		{
//			PH = PH->next;
//			PM = PM->next;
//		}
//		return PM;
//	}
//};


//��������в�������
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
//	ListNode* insertionSortList(ListNode* head)
//	{
//		ListNode* cur = head;
//		ListNode* NewHead = NULL;
//		while (cur)
//		{
//			//��һ���ڵ�
//			head = cur->next;
//			ListNode* pos = NewHead;
//			ListNode* prev = NULL;
//			while (pos)
//			{
//				if (cur->val <  pos->val)
//				{
//					break;
//				}
//				prev = pos;
//				pos = pos->next;
//			}
//
//			if (pos == NewHead)
//			{
//				cur->next = NewHead;
//				NewHead = cur;
//			}
//			else
//			{
//				prev->next = cur;
//				cur->next = pos;
//			}
//			cur = head;
//		}
//		return NewHead;
//	}
//};


//���ƴ����ָ�������
/*
// Definition for a Node.
class Node {
public:
int val;
Node* next;
Node* random;

Node(int _val) {
val = _val;
next = NULL;
random = NULL;
}
};
*/
//class Solution {
//public:
//	Node* buyNode(int val)
//	{
//		Node* newNode = (Node*)malloc(sizeof(Node));
//		if (NULL == newNode)
//		{
//			return NULL;
//		}
//		newNode->val = val;
//		newNode->next = NULL;
//		newNode->random = NULL;
//
//		return newNode;
//	}
//
//	Node* copyRandomList(Node* head)
//	{
//		if (NULL == head)
//		{
//			return NULL;
//		}
//		Node* newNode = NULL;
//		Node* cur = head;
//		while (cur)
//		{
//			newNode = buyNode(cur->val);
//			newNode->next = cur->next;
//			cur->next = newNode;
//			cur = newNode->next;
//		}
//		//��randomֵ
//		cur = head;
//		while (cur)
//		{
//			newNode = cur->next;
//			if (cur->random)     //ԭ���Ľڵ��random��Ϊ��
//			{
//				newNode->random = cur->random->next;
//			}
//			cur = newNode->next;
//		}
//
//		//��ԭ���Ľڵ�ȫ�����
//		Node* NewHead = head->next;
//		cur = head;
//		while (cur->next)		//һ������Ĳ�
//		{
//			newNode = cur->next;
//			cur->next = newNode->next;
//			cur = newNode;
//		}
//		return NewHead;
//	}
//};