#define _CRT_SECURE_NO_WARNINGS 1/*
#include<stdio.h>
int mian()
{
	int i = 0;
	char arr1="123456";
	for(	)
	
	return 0 ;
}*/#include<stdio.h>
#include<windows.h>
int my_strlen(char *string)
{
    int count = 0;
    if (*string != '\0')
    {
        count++;
    }
    return count;
}

int main()
{
    char *str = "abcdef";
    printf("%d\n",my_strlen(str));
    system("pause");
    return 0;
}
