#include<stdio.h>
#include<stdlib.h>
//√∞≈›≈≈–Ú
void BullSort(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int tmp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = tmp;
			}
		}
	}
}

//÷±Ω”—°‘Ò≈≈–Ú
void ChooseSort(int* a,int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (a[i] > a[j])
			{
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}

//œ£∂˚≈≈–Ú

void ShellSort(int*a, int n)
{
	int gap = 5;
	int end = ;
	while ()
	{

	}
}

int main()
{
	int a[] = { 9,8,7,6,5,4,2,3,1};
	int n = sizeof(a) / sizeof(a[0]);
	ChooseSort(a, n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}



