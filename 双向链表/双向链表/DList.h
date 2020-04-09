#include<iostream>
using namespace std;

typedef int DATATYPE;
typedef struct DListNode
{
	DListNode* next;
	DListNode* prev;
	DATATYPE val;
};

DListNode* BuyDListNode(int val);
DListNode* CreatDList();
void DListNodePushBack(DListNode* pHead, int val);
