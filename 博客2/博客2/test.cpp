#include<stdio.h>
#include<stdlib.h>

void ShellSort(int* a, int n)
{
	int gap = 5;
	while (gap > 1)
	{
		gap = (gap / 3) + 1;
		for (int i = 0; i < n - gap; i++)
		{

			int end = i;
			while (end >= 0)
			{
				if (a[end] > a[end + gap])
				{
					int tmp = a[end];
					a[end] = a[end + gap];
					a[end + gap] = tmp;
					end -= gap;
				}
				else
					break;
			}
		}
	}
}

void ShellSort1(int* a, int n)
{
	int gap = 5;
	while (gap > 1)
	{
		gap = (gap / 3) + 1;
		for (int i = 0; i < n - gap; i++)
		{
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (a[end] > tmp)
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
					break;
			}
			a[end + gap] = tmp;//
		}
	}
}


void HeapBuilt(int* a, int n, int i)//½¨Ð¡¶Ñ
{
	int parent = i;
	int child = parent * 2 + 1;
	while (child < n)
	{
		if (child + 1 < n && a[child + 1] < a[child])
			child++;
		if (a[child] < a[parent])
		{
			int tmp = a[parent];
			a[parent] = a[child];
			a[child] = tmp;

			parent = child;
			child = parent * 2 + 1;
		}
		else
			break;
	}
}

void HeapSort1(int* a, int n)
{
	for (int i = (n - 2) / 2; i >= 0; i--)
	{
		HeapBuilt(a, n, i);
	}
	int end = n - 1;
	while (end > 0)
	{
		int tmp = a[0];
		a[0] = a[end];
		a[end] = tmp;
		HeapBuilt(a, end, 0);
		end--;
		
	}
}


int main()
{
	int a[] = { 20,17,4,16,5,3};
	int n = sizeof(a) / sizeof(a[0]);
	HeapSort1(a, n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}