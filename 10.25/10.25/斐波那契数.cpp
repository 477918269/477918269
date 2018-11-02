//////////递归
////#include<stdio.h>
////
////int fb(int n)
////{
////	if(n=1)
////		return 1;
////	if(n>1)
////		return fb(n-1)+fb(n-2); 
////}
////int main()
////{
////	int n = 0;
////	scanf("%d", &n);
////	fb(n);
////	printf("%d",fb(n));
////	
////	return 0;
////}
////////递归
//#include<stdio.h>
//
//int fb(int n)
//{
//	if(n<=2)
//		return 1;
//	else
//		return fb(n-1)+fb(n-2); 
//}
//int main()
//{
//	int n = 0;
//	printf("请输入要求第几个数：");
//    scanf("%d", &n);
//    int ret = fb(n);
//	printf("%d",fb(n));
//	
//	return 0;
//}
//
////int main()
////{
////	int a = 1;
////	int b = 1;
////	int c = 1;
////	int n = 1;
////	scanf("%d", &n);
////
////	
////	
////	while(n>2)
////	{
////		c = a+b;
////		a = b;
////		b = c;
////		n--;
////
////
////	}
////	printf("%d", c);
////	
////	return 0;
////}