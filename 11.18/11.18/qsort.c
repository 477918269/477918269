#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int comp(const void* x, const void* y)
{
	return *(int*)y - *(int*)x;//Ϊ���Ļ� q1 �ŵ� q2֮ǰ��
	//return *(int*)x - *(int*)y;//Ϊ���Ļ� q2 �ŵ� q1֮ǰ��
							
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