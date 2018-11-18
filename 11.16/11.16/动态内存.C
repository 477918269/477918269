#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//void GetMemory(char *p) {    p = (char *)malloc(100); } void Test(void) {    char *str = NULL;    GetMemory(str);    strcpy(str, "hello world");    printf(str); }
char *GetMemory(void)
{
	char p[] = "hello world";
	return p;
}
void Test(void) 
{
	char *str = NULL;
	str = GetMemory();
	printf(str);
}
