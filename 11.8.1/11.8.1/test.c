
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void Xuanzhuan_zifu(char* a, char sz, int k)
{	
	int j = 0;
	int i = 0;
	for(j=0; j<k; j++)
	{
		char tmp = a[0];
		for(i=0; i<sz; i++)
		{
			a[i] = a[i+1];
		}
		a[i] = tmp;
	}
}

int main()
{
	char a[] = "ABCD";
	int k = 0;
	char sz	= strlen(a);
	printf("请输入要旋转的位数>:");
	scanf("%d", &k);
	Xuanzhuan_zifu(a, sz,k);
	printf("%s ", a);
	return 0;
}