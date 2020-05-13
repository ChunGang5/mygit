#include<iostream>
using namespace std;
//��������
//void InserSort(int arr[], int n)
//{
//	int key;
//	for (int i = 1; i < n; i++)	//�����ֻ��Ҫ���Ĵ�
//	{
//		key = arr[i];
//		int end = i - 1;
//		while (arr[end] > key && end>=0)
//		{
//			arr[end + 1] = arr[end];
//			end--;
//		}
//		arr[end + 1] = key;
//	}
//}

//ϣ������
//void ShellSort(int arr[], int n,int gap)	//��
//{
//	while (gap >= 1)
//	{
//		int key;
//		for (int i = gap; i < n; i++)	//�����ֻ��Ҫ���Ĵ�
//		{
//			key = arr[i];
//			int end = i - gap;
//			while (arr[end] > key && end >= 0)
//			{
//				arr[end + gap] = arr[end];
//				end-=gap;
//			}
//			arr[end + gap] = key;
//		}
//		gap--;
//	}
//	
//}

//ֱ��ѡ������
//void QuickSelectionSort(int arr[], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		int min;
//		int temp;
//		for (int j = i + 1; j < n; j++)
//		{
//			min = i;
//			if (arr[j] < arr[min])
//			{
//				min = j;
//			}
//		}
//		//����������㣬�ڲ�forֻ���ҳ���ֵ���±�
//		temp = arr[i];
//		arr[i] = arr[min];
//		arr[min] = temp;
//	}
//}

//������
/*�����򣺽���->С�ѣ�����->��ѣ���������*/
//void HeapAdjuct(int array[], int size, int parent)
//{
//	int child = parent * 2 + 1;
//	while (child < size)
//	{
//		if (child + 1 < size&&array[child + 1] > array[child])
//			child += 1;
//		if (array[child] > array[parent])
//		{
//			int temp = array[child];
//			array[child] = array[parent];
//			array[parent] = temp;
//			parent = child;
//			child = parent * 2 + 1;
//		}
//		else
//		{
//			return;
//		}
//
//	}
//}
//void HeapSort(int array[], int size)
//{
//	//1.����
//	for (int root = (size - 2) >> 1; root >= 0; root--)
//	{
//		HeapAdjuct(array, size, root);
//	}
//	//2.���ö�ɾ��˼������
//	int end = size - 1;
//	while (end)
//	{
//		int temp = array[end];
//		array[end] = array[0];
//		array[0] = temp;
//		HeapAdjuct(array, end, 0);
//		end--;
//	}
//}

//ð������
//void BubbleSort(int arr[], int n)
//{
//	for (int i = 1; i < n; i++)
//	{
//		for (int j = 0; j < n - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] =temp;
//			}
//		}
//	}
//}

//��������
//���ֺ���
int partition(int *arr, int i, int j)
{
	//���ֵ�Ԫ�أ���ȡ����ߵ���
	int temp = arr[i];
	while (i < j)
	{
		//���������ҵ���һ��С�ڻ���ֵ����
		while (arr[j] >= temp&&i<j)
		{
			j--;
		}
		if (i < j)
		{
			arr[i] = arr[j];
			i++;
		}
		//���������ҵ���һ�����ڻ���ֵ������λ��
		while (arr[i] <= temp&&i < j)
		{
			i++;
		}
		if (i < j)
		{
			arr[j] = arr[i];
			j--;
		}
	}
	//��i=jʱ�����λ������
	arr[i] = temp;
	//�����λ��ֵ�Ԫ�������±귵�أ�����������ַ�Χ
	return i;
}
void QuickSort(int *arr, int i, int j)
{
	int k;
	while (i < j)
	{
		k = partition(arr, i, j);
		//�ݹ黮�����
		QuickSort(arr, i, k - 1);
		//�ݹ黮���ұ�
		QuickSort(arr, k + 1, j);
	}
}
int main()
{
	int arr[8] = { 4, 3, 7, 1, 2, 8, 6, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	//InserSort(arr, n);
	//ShellSort(arr, n, 3);
	//QuickSelectionSort(arr, n);
	//HeapSort(arr, n);
	//BubbleSort(arr, n);
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i] << endl;
	}
	QuickSort(arr, 0, n-1);
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i] << endl;
	}
	cin.get();
	return 0;
}