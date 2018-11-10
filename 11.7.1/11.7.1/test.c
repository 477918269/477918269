//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	
//
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[]="student a am i";
//	int len = my_strlen(arr);
//	printf("%d\n",my_strlen(arr));
//		
//		
//	return 0;
//}
#include<stdio.h>
int my_strlen(char* str)
{
	int count = 0;
	while(*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
void replay_replay(char arr[],int left, int right)
{
	
	while(left<right)
	{
		char tmp = 0;
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
char* replay(char arr[])
{
	int i = 0;
	int left = 0;
	int right = my_strlen(arr)-1;
	replay_replay(arr,left,right);
	while(arr[i] != '\0')
	{
		left = i;
		
		while((arr[i] != ' ') && (arr[i] != '\0'))
		{
			i++;
		}
		right = i - 1;
		
		
			if(arr[i] != '\0')
			i++;


	}
	return arr;
}
int main()
{
	char arr[]="student a am i";
	replay(arr);
	printf("%s\n", arr);
	return 0;
}