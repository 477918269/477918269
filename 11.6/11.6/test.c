#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	printf("请输入一个数>:");
//	scanf("%d",&i);
//	while(i)
//	{
//		printf("%d",i%10);
//		printf("\n");
//		i = i/10;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int count = 0;
//	printf("请输入两个数>;");
//	scanf("%d%d",&i,&j);
//	for(n=0; n<32; n++)
//	{
//		if(((i>>n)&1) != ((j>>n)&1))
//		count++;
//	}
//	printf("%d",count);
//	
//	return 0;
//}
#include<stdio.h>
unsigned int reverse_bit(unsigned int x)
{
	int bit = 0;
	int new_x = 0;
	int j = 0;
	for(j=31; j>=0; j--)
	{
		new_x = new_x<<1;
		bit = x & 1;
		x = x>>1;
		new_x = bit|new_x;
		
	}
	return new_x;
}
int main()
{
	int i = 0;
	printf("请输入要反转的数字>:");
	scanf("%d",&i);
	
	printf("%u",reverse_bit(i));
	return 0;
}
