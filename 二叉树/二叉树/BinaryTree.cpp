#pragma once

#include<iostream>
#include<malloc.h>
#include<assert.h>
#include<queue>
#include<vector>
using namespace std;



typedef int BTDataType;
typedef struct BinTreeNode
{
	struct BinTreeNode* pLeft;
	struct BinTreeNode* pRight;
	BTDataType val;
}BTNode;

//创建一个新节点
BTNode* BuyBinTreeNode(BTDataType val)
{
	BTNode* pNewNode = (BTNode*)malloc(sizeof(BTNode));
	if (NULL == pNewNode)
	{
		assert(0);
		return NULL;
	}
	pNewNode->pLeft = NULL;
	pNewNode->pRight = NULL;
	pNewNode->val = val;
	return pNewNode;
}
//为了快速验证，所以创建的一种快速二叉树
BTNode* CreateBinTree()
{
	BTNode* node1 = BuyBinTreeNode(1);
	BTNode* node2 = BuyBinTreeNode(2);
	BTNode* node3 = BuyBinTreeNode(3);
	BTNode* node4 = BuyBinTreeNode(4);
	BTNode* node5 = BuyBinTreeNode(5);
	BTNode* node6 = BuyBinTreeNode(6);

	BTNode* pRoot = node1;
	node1->pLeft = node2;
	node2->pLeft = node3;
	node1->pRight = node4;
	node4->pLeft = node5;
	node4->pRight = node6;
	return pRoot;
}
//前序遍历
void PreOrder(BTNode* pRoot)
{
	if (pRoot)
	{
		cout << pRoot->val ;
		PreOrder(pRoot->pLeft);
		PreOrder(pRoot->pRight);
	}
}
//中序遍历
void InOrder(BTNode* pRoot)
{
	if (pRoot)
	{
		
		InOrder(pRoot->pLeft);
		cout << pRoot->val << endl;
		InOrder(pRoot->pRight);
	}
}
//后序遍历
void PostOrder(BTNode* pRoot)
{
	if (pRoot)
	{
		PostOrder(pRoot->pLeft);
		PostOrder(pRoot->pRight);
		cout << pRoot->val << endl;
	}
}

//获取二叉树的节点个数
int GetNodeCount(BTNode* pRoot)
{
	if (NULL == pRoot)
	{
		return 0;
	}
	else
	{
		return 1 + GetNodeCount(pRoot->pLeft) + GetNodeCount(pRoot->pRight);
	}
}
//获取二叉树叶子的节点数
int GetLeafNodeCount(BTNode* pRoot)
{
	if (pRoot == NULL)
	{
		return 0;
	}
	if (pRoot->pLeft == NULL&&pRoot->pRight == NULL)
	{
		return 1;
	}
	return  GetLeafNodeCount(pRoot->pLeft) + GetLeafNodeCount(pRoot->pRight);
}
//获取第k层的节点数
int GetKLevelCount(BTNode* pRoot,int k)
{
	if (NULL == pRoot || k <= 0)
	{
		return 0;
	}
	if (k == 1)
	{
		return 1;
	}
	return GetKLevelCount(pRoot->pLeft, k - 1) + GetKLevelCount(pRoot->pRight, k - 1);
}
//获取二叉树的高度
int GetHeight(BTNode* pRoot)
{
	if (pRoot == NULL)
	{
		return 0;
	}
	int leftHeight = GetHeight(pRoot->pLeft);
	int rightHeight = GetHeight(pRoot->pRight);
	return leftHeight > rightHeight ? leftHeight + 1 : rightHeight + 1;
}
//返回x在树中对应的节点
BTNode* Find(BTNode* pRoot, BTDataType x)
{
	if (NULL == pRoot)
	{
		return NULL;
	}
	if (pRoot->val == x)
	{
		return pRoot;
	}
	return Find(pRoot->pLeft, x) || Find(pRoot->pRight, x);	//短路效应
}
//获取pNode的双亲
BTNode* GetParent(BTNode* pRoot, BTNode* pNode)
{
	if (NULL == pRoot || pNode == NULL || pNode == pRoot)
	{
		return NULL;
	}
	if (pRoot->pLeft == pNode || pRoot->pRight == pNode)
	{
		return pRoot;
	}
	return GetParent(pRoot->pLeft, pNode) || GetParent(pRoot->pRight, pNode);
}

void LevelOrder(BTNode* pRoot)
{
	queue<BTNode*> BirayQueue;
	if (pRoot)
	{
		BirayQueue.push(pRoot);
	}
	while (!BirayQueue.empty())
	{
		BTNode* cur = BirayQueue.front();
		if (NULL != cur->pLeft)
		{
			BirayQueue.push(cur->pLeft);
			BirayQueue.
		}
		if (NULL != cur->pRight)
		{
			BirayQueue.push(cur->pRight);
		}
		cout << cur->val << endl;
		BirayQueue.pop();
	}
}
//////////////////////////////////////////////////////////////////////////////////////


int main()
{
	BTNode* pRoot = CreateBinTree();
	PreOrder(pRoot);
	InOrder(pRoot);
	PostOrder(pRoot);
	cout << "节点个数" << endl;
	cout << GetNodeCount(pRoot) << endl;
	cout << GetLeafNodeCount(pRoot) << endl;
	cout << GetHeight(pRoot) << endl;
	cout << GetKLevelCount(pRoot, 2) << endl;
	string s;
	cin.getline(cin, s);
	cin.get();
	return 0;
}