//第一种方法 逻辑判断
#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//int count_one_bits(unsigned int x)
//{
//	int count = 0;
//	while(x!=0)
//	{
//		if(x%2 == 1)
//		{
//			count++;
//		}
//		x = x/2;
//	}
//	return count;
//
//}
//int main()
//{
//	int i = 0;
//	printf("请输入要求的值>:\n");
//	scanf("%d",&i);
//	int ret = count_one_bits(i);
//	printf("ret=%d",ret);
//	return 0;
//}
//#include<stdio.h>
//int count_one_bits(unsigned int x)
//{
//	int count = 0;
//	int i = 0;
//	for(i=0; i<32; i++)
//	{
//		if(((x>>i)&1)==1)
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int x = 0;
//	printf("请输入要求的值>:\n");
//	scanf("%d",&x);
//	int ret = count_one_bits(x);
//	printf("ret=%d",ret);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	printf("请输入要求的值>:\n");
//	scanf("%d",&n);
//	for(i=31; i>0; i-=2)
//	{
//		
//		printf("%d",(n>>i)&1);
//	}
//	printf("\n");
//	for(i=30; i>=0; i-=2)
//	{
//		
//		printf("%d",(n>>i)&1);
//	}
//	return 0;
//}
//00000000 00000000 00000000 00010101
//
//00000000 00000000 00000000 00010101
//00000000 00000000 00000000 00000000
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int count_one_bits(unsigned int x)
{
	int count = 0;
	while(1)
	{
		if(x%2 == 1)
		{
			count++;
		}
		x = x/2;
	}
	return count;

}
int main()
{
	int i = 0;
	printf("请输入要求的值>:\n");
	scanf("%d",&i);
	int ret = count_one_bits(i);
	printf("ret=%d",ret);
	return 0;
