//#define _CRT_SECURE_NO_WARNINGS 1
////#include<stdio.h>
////unsigned int reverse_bit(unsigned int x)
////1
////{
////	int bit = 0;
////	int new_x = 0;
////	int j = 0;
////	for(j=31; j>=0; j--)
////	{
////		new_x = new_x<<1;
////		bit = x & 1;
////		x = x>>1;
////		new_x = new_x|bit;
////		
////	}
////	return new_x;
////}
////2
////#include<math.h>
////#include<stdio.h>
////unsigned int reverse_bits(unsigned int n)
////{
////	unsigned int sum = 0;
////	int i = 0;
////	{
////		sum += ((n>>1)&1)*pow(2,31-i)
////	}
////	return sum
////}
////int main()
////{
////	int i = 0;
////	printf("请输入要反转的数字>:");
////	scanf("%d",&i);
////	
////	printf("%u",reverse_bit(i));
////	return 0;
////}
////#include<stdio.h>
////int main()
////{
////	int a = 10;
////	int b = 12;
////	/*printf("%d",a+((b-a)/2) );*/
////	/*printf("%d\n", a+((b-a) >> 1));*/
////	/*printf("%d\n",a&b+((a^b)>>1));*/
////
////	return 0;
////}
////找单独的数字
////#include<stdio.h>
////int main()
////{	
////	int arr[]={1,2,3,2,1};
////	int ret = sizeof(arr)/sizeof(arr[0]);
////	int i = 0;
////	for(i=1; i<ret; i++)
////	{
////		arr[0]=arr[0]^arr[i];
////	}
////	printf("%d",arr[0]);
////	return 0;
////}
//#include<stdio.h>
//int strlen(char* str)
//{
//	int count = 0;
//	while(*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_str(char* start, char* end)
//{
//	while()
//	{
//		char tmp = *start;
//		*start = *end;
//		*end = *tmp;
//		start++;
//		end--;
//	}
//}
//void reverse(char* str)
//{
//
//	char* start = cur;
//	while((*cur !=' ') && (*cur !='\0'))
//	{
//		cur++;
//	}	
//}
//int main()
//{
//	//char arr[]="student a am i";
//	//int i = 0;
//	//int ret = sizeof(arr)/sizeof(arr[0]);
//	//for(i=0; i<ret; i++)
//	//{
//	//	int tmp = 
//	//}
//	//1.整体逆转一次
//	//2.字串局部逆转
//	return 0;
//}