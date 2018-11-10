#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//////自己设计求字符串长度的函数
////int my_strlen(char* str)
////{
////	int count = 0;
////	
////
////	while(*str != ' ')
////	{
////		count++;
////		str++;
////	}
////	return count;
////}
////void replay_replay(char* arr,int left,int right)
////{
////	int i = 0;
////	char let = my_strlen;
////	while(left<right)
////	{
////		int tmp = arr[left];
////		arr[left]  = arr[right];
////		arr[right]= tmp ;
////		left++;
////		right--;
////	}
////}
//////交换字符串
////int replay(char* pl)
////{
////	int i = 0;
////	int left = 0;
////	int right = my_strlen(pl)-1;
////	replay_replay(arr, right, left);
////
////	while(pl != '\0')
////	{
////		
////		while(((*pl) != ' ') && ((*pl) ! ='\0'))
////		{
////			left++;
////		}
////		int ump = arr[left];
////		arr[left]  = arr[right];
////		arr[right]= tmp;
////		left++;
////		right--;
////
////	}
////
////	
////}
////int main()
////{
////	char arr[] = "student a am i";
////	int y = replay(arr);
////	printf("%c",y);
////	return 0;
////}
//#include<stdio.h>
//
//int my_strlen(const char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void pubg(char* arr,int left, int right)
//{
//	
//	while(left>right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//char* replay(char arr[])
//{
//	int i = 0;
//	int left = 0;
//	int right = my_strlen(arr)-1;
//	pubg(arr,right,left);
//	while(*arr != '\0')
//	{
//		left = i;
//		
//		while((*arr != ' ') && (*arr != '\0'))
//		{
//			i++;
//		}
//		right = i - 1;
//		pubg(arr,right,left);
//		
//		
//		if(*arr != '\0')
//			i++;
//
//	}
//	return arr;
//}
//int main()
//{
//	char arr[]="student a am i";
//	replay(arr);
//	printf("%s/n", arr);
//	return 0;
//}
int* change(int a, int sz)
{
	int i = 0;
	int let = sz-1;
	while(i>sz)
	{
		
	}

}
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr)/sizeof(arr[0]);
	change(a,sz);
	int j = 0;
	for(j=0; j<sz; j++)
	{
		printf("%d",a)
	}
	return 0;
}