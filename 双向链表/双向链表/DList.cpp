//#include "DList.h"
//#include<assert.h>
//
//DListNode* BuyDListNode(int val)
//{
//	DListNode* newNode = (DListNode*)new(DListNode);
//	if (NULL == newNode)
//	{
//		assert(0);
//		return NULL;
//	}
//	newNode->next = NULL;
//	newNode->prev = NULL;
//	newNode->val = val;
//
//	return newNode;
//}
//
//DListNode* CreatDList()
//{
//	DListNode* head = BuyDListNode(0);
//	head->next = head;
//	head->prev = head;
//	return head;
//}
//void DListNodePushBack(DListNode* pHead, int val)
//{
//	if (NULL == pHead)
//	{
//		return;
//	}
//	DListNode* newNode = BuyDListNode(val);
//	newNode->prev = pHead->prev;
//	newNode->next = pHead;
//	newNode->prev->next = newNode;
//	pHead->prev = newNode;
//}
//
//int main()
//{
//	DListNode* p1=BuyDListNode(0);
//	DListNode* p2=BuyDListNode(1);
//	DListNode* p3=BuyDListNode(2);
//
//	p1->next = p2;
//	p2->next = p3;
//	p2->prev = p1;
//	p3->prev = p2;
//	DListNodePushBack(p1, 3);
//	cout << p3->next->val << endl;
//	cin.get();
//	return 0;
//}



//5
//5 3 1 4 2
//2 4 5 1 3
//3
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	
//	while (1)
//	{
//		int num = 0;
//		cin >> num;
//		vector<int> arr1(num);
//		vector<int> arr2(num);
//		int count = 0;
//		for (int i = 0; i < num; i++)
//		{
//			cin >> arr1[i];
//		}
//		for (int i = 0; i < num; i++)
//		{
//			cin >> arr2[i];
//		}
//		for (int i = 0; i < num; i++)
//		{
//			for (int j = 0; j < num; j++)
//			{
//				if (arr1[i] == arr2[j])
//				{
//					if (j < i)
//					{
//						count++;
//					}
//				}
//			}
//		}
//		cout << count << endl;
//	}
//	return 0;
//}

//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int num = 5;
//	vector<int> arr(5);
//for (int i = 0; i < num; i++)
//	{
//		cin >> arr[i];
//	}
//	return 0;
//}


