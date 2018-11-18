#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int comp(const void* x, const void* y)
{
	return *(int*)y - *(int*)x;//为正的话 q1 排到 q2之前，
	//return *(int*)x - *(int*)y;//为正的话 q2 排到 q1之前，
							
}
int main()
{
	int a[] = {10,6,8,4,5};
	int i = 0;
	qsort(a, 5, sizeof(int), comp);
	for(i=0; i<5; i++)
	{
		printf("%d ", a[i]);
	}
	
	return 0;
}