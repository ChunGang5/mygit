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
void DListNodePopBack(DListNode* pHead);

void DListInsert(DListNode* pos, int val);
void DListErass(DListNode* pos);

void DListPushFront(DListNode* pHead, int val);
void DListPopFront(DListNode* pHead);

DListNode* DListFind(DListNode* pHead, int val);
void DListDestroy(DListNode** pHead);