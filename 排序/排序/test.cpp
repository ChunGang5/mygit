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
int main()
{
	int arr[5] = { 2, 4, 3, 6, 5};
	int n = sizeof(arr) / sizeof(arr[0]);
	//InserSort(arr, n);
	//ShellSort(arr, n, 3);
	//QuickSelectionSort(arr, n);
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i] << endl;
	}
	cin.get();
	return 0;
}