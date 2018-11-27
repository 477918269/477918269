#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a[10] = {10,9,8,7,6,5,4,3,2,1};
	int i = 0;
	int j = 0;
	int k = 0;
	for(i=0;i<10;i++)
	{
		for(j=0; j<10-i-1; j++)
		{
			if(a[j]>a[j+1])
			{
				int tmp = a[j+1];
				a[j+1]	= a[j];
				a[j]	= tmp;
			}
		}
	}
	for(k=0;k<10;k++)
	printf("%d",a[k]);
	return 0;
}


//int main()
//{
//	int a[] ={1,2,3,4,5,6,7,8,9,10} 
//	return 0;
//}
//

