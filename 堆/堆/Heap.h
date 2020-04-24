#pragma once
typedef int HDataType;
typedef struct Heap
{
	HDataType *array;
	int capacity;
	int size;
}Heap;

void HeapInit(Heap* hp);
void CreateHeap(Heap* hp, HDataType arr[], int size);
void HeapPush(Heap* hp, HDataType data);
void HeapPop(Heap* hp);
HDataType HeapTop(Heap* hp);
HDataType HeapSize(Heap* hp);
int HeapIsEmpty(Heap* hp);
void HeapDestroy(Heap* hp);