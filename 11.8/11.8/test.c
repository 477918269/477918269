#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void change(int a[], int sz)
//{
//	int j = 0;
//	while(j<sz)
//	{	
//		int tmp = 0;
//		while(a[j]%2 != 0 && j<sz)
//		{
// 			j++;
//			
//		}
//		while(a[sz]%2 != 1 && j<sz)
//		{
//			sz--;
//		}
//		 tmp = a[j];
//		a[j]	= a[sz];
//		a[sz]	= tmp;		
//	}
//}
//int main()
//{
//	int a[5]={1,2,3,4,5};
//	int sz = sizeof(a)/sizeof(a[0]);
//	int i = 0;
//	
//	change(a,sz-1);
//	
//	for(i=0; i<sz ;i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void replay_replay(char arr[],int left, int right)
//{
//	
//	while(left<right)
//	{
//		char tmp = 0;
//		tmp = arr[left];
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
//	replay_replay(arr,left,right);
//	while(arr[i] != '\0')
//	{
//		left = i;
//		
//		while((arr[i] != ' ') && (arr[i] != '\0'))
//		{
//			i++;
//		}
//		right = i - 1;
//		
//		
//			if(arr[i] != '\0')
//			i++;
//
//
//	}
//	return arr;
//}
//int main()
//{
//	char arr[]="student a am i";
//	replay(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//#define ROW 3
//#define COL 3
//Yangshi_hanshu(int a[ROW][COL], int i)
//{
//	
//}
//
//int main()
//{	
//	int a[ROW][COL] = {1,2,3,4,5,6,7,8,9};
//	int i = 0;
//	printf("请输入你要找的数>:");
//	scanf("%d ", &i);
//	Yangshi_hanshu(a, i);
//	return 0;
//}
//#include<string.h>
//void Xuanzhuan_zifu(char* a, char sz, int k)
//{	
//	int j = 0;
//	int i = 0;
//	for(j=0; j<k; j++)
//	{
//		char tmp = a[0];
//		for(i=0; i<sz-1; i++)
//		{
//			a[i] = a[i+1];
//		}
//		a[i] = tmp;
//	}
//}
//
//int main()
//{
//	char a[] = "ABCD";
//	int k = 0;
//	char sz	= strlen(a);
//	printf("请输入要旋转的位数>:");
//	scanf("%d", &k);
//	Xuanzhuan_zifu(a, sz,k);
//	printf("%s ", a);
//	return 0;
//}
//#include<string.h>
//int Jiancha(char* s1, char* s2, int sz, int i)
//{
//	int j = 0;
//	for(j=0; j<2; j++)
//	{
//		char tmp = s1[0];
//		for(i=0; i<sz-1; i++)
//		{
//			s1[i] = s1[i+1];
//		}
//		s1[i] = tmp;
//	}
//	if (0 == strcmp(s1, s2))
//        {
//            return 1;
//        }
//    
//    return 0;
//}
//int main()
//{
//	char s1[]="AABCD";
//	char s2[]="BCDAA";
//	int sz = strlen(s1);
//	int i = 0;
//	Jiancha(s1, s2, sz, i);
//	printf("%d\n",Jiancha(s1, s2, sz, i));
//	return 0;
//}

//#include<string.h>	
//void Chongfu(int* arr, int sz)
//{
////	int i = 0;
////	int j = 0;
////	for(i=0; i<sz-1; i++)
////	{
////		int count = 0;
////		for((j=0;j<sz-1;j++) && (i!=j))
////		{
////			if(arr[i] == arr[j])
////				count++;
////		}
////		if(count == 0)
////		{
////			printf("%d ",arr[i])tr
////		}
////	}
//	int i = 0;
//	while(i<sz-1)
//	{
//		int j = 0;
//		int count = 0;
//		while(j<sz)
//		{
//			if((arr[i] == arr[j]) && (i!=j))
//				count++;
//				j++;
//		}
//		if(count == 0)
//			printf("%d ",arr[i]);
//		i++;
//	}
//}
//int main()
//{
//	int arr[] = {1,1,4,4,5,6,7,7};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	Chongfu(arr,sz);
//	return 0;
//}