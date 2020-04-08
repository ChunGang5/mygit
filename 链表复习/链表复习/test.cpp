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

//方法二  双指针法
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
//		if (pListHead == NULL || k == 0)    //判断链表是否为空，还有k的不正确，如果k=0，倒数第零个就没有啊
//		{
//			return NULL;
//		}
//		ListNode *cur = pListHead;
//		ListNode *last = pListHead;
//		while (k--)    //k<0这种情况循环根本不进去，这是这个问题的一个bug处
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


//合并两个有序单链表
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
//		ListNode* tail = NULL;    //标识新链表最后一个节点
//		if (l1 == NULL)    //先给一个头节点
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
//		//遇到有一个链表遍历完的情况
//		if (cur1 == NULL)
//			tail->next = cur2;
//		if (cur2 == NULL)
//			tail->next = cur1;
//		return newhead;
//	}
//};

 
//链表分割，--注意审题，x不是链表原有的节点值，只是给了一个值而已
/*
struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) : val(x), next(NULL) {}
};*/
//class Partition {
//public:
//	ListNode* partition(ListNode* pHead, int x) {
//		ListNode BigHead(0);    //这个题有点怪病，非要用结构体初始化才不出错
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
//		BigTird->next = NULL;    //链表最末尾要指向NULL，不然就不完整，就会乱访问，出错
//		return LittleHead.next;    //因为两个链表的头节点放的数都是0
//	}
//};


//回文链表
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


//相交链表的第一个节点
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
//		if (NULL == headA || NULL == headB)    //两个链表有一个为空，或都为空
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
//		if (curB != curA)      //两个链表不为空，但不相交
//			return NULL;
//
//		int n = sizeA - sizeB;
//		//链表A比B长n个节点，的先遍历n次
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
//		else    //B比A长
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


//求环形链表入环的第一个节点
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


//对链表进行插入排序
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
//			//拿一个节点
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


//复制带随机指针的链表
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
//		//找random值
//		cur = head;
//		while (cur)
//		{
//			newNode = cur->next;
//			if (cur->random)     //原来的节点的random不为空
//			{
//				newNode->random = cur->random->next;
//			}
//			cur = newNode->next;
//		}
//
//		//把原来的节点全部拆掉
//		Node* NewHead = head->next;
//		cur = head;
//		while (cur->next)		//一个巧妙的拆法
//		{
//			newNode = cur->next;
//			cur->next = newNode->next;
//			cur = newNode;
//		}
//		return NewHead;
//	}
//};