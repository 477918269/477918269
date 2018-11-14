#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//char* my_strstr(char* dest, char* str)
//{
//	
//	char* s1 = (char*)dest;
//	char* s2 = (char*)str;
//	char* cp = NULL;
//	if(s2 == '\0')
//	{
//		return 0;
//	}
//	while(*s1)
//	{
//		cp = s1;
//		while(*s2 && *s1==*s2)
//		{
//			s1++;
//			s2++;
//		}
//		if(*s2 == '\0')
//		{
//			return cp;
//		}
//		s1++;
//	}
//	return 0;
//}
//int main()
//{
//	char s[] = "abbbcder";
//	char* ret = my_strstr(s, "bbc");
//	printf("%d", ret);
//	return 0;
//}
//char* my_strchr(const char* dest, char* str)
//{
//	char* s1 = (char*)dest;
//	char* cp = NULL;
//	if(*str=='\0')
//		return 0;
//	while(*s1)
//	{
//		cp = s1;
//		if(*s1 == *str)
//		{
//			return cp;
//		}
//		s1++;
//	}
//	return 0;
//}
//int main()
//{
//	char a[] ="abcdef";
//	char* ret = my_strchr(a, "f");
//	printf("%d", ret);
//	return 0;
//}
//char* my_strcmp(char* dest, char* str)
//{
//	//assert(*str != '\0');
//	//assert(*dest != '\0');
//	char* s1 = (char*)dest;
//	char* s2 = (char*)str;
//	
//	while(*s1)
//	{
//		while(*s1 == *s2 && *s1 && *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if(*s1 == '\0' && *s2 == '\0')
//			return 0;
//		if(*s1 == '\0')
//			return (char*)-1;
//		if(*s2 == '\0')
//			return (char*)1;
//	}
//	return (char*)-1;	
//}
//int main()
//{
//	char s1[] ="abcdef";
//	char s2[] ="abcdef";
//	char* ret =my_strcmp(s1, s2);
//	printf("%d", ret);
//	
//	return 0;
//}
//void* my_memcpy(void* dest,const void* str, int count)
//{
//
//	void* len = dest;
//	while(count--)
//	{
//		*(char*)dest =  *(char*)str;
//		((char*)dest)++;
//		((char*)str)++;
//	}
//	return len;
//}
//int main()
//{
//	int a[20] ={0};
//	int a1[] = {1,2,3,4,5};
//	my_memcpy(a,a1,sizeof(a1));
//	return 0;
//}
void* my_memmove(void* dest, void* str, int count)
{
	void* len = dest;
	if(dest<str)
	{
		while(count--)
		{
			*(char*)dest =  *(char*)str;
			((char*)dest)++;
			((char*)str)++;
		}
	}
	else if(dest>str)
	{
		while(count--)
		{
			*((char*)dest+count) =  *((char*)str+count);
		}
	}
	return len;
}
//´íÎóº¯Êı£¬£¿£¿£¿£¿£¿£¿£¿£¿£¿ÔõÃ´´íµÄ£¿£¿£¿¡£
	/*void* len = dest;
	while(*(char*)dest < *(char*)str && count--)
	{
		*((char*)str+count) = *(char*)dest;
		((char*)str)++;
		((char*)dest)++;
		
	}
	while(*(char*)dest >*(char*)str && count--)
	{
		*(char*)dest =  *(char*)str;
		((char*)dest)++;
		((char*)str)++;
	}
	return len;*/
//}
int main()
{
	int a[20] = {1,2,3,4,5,6,7,8,9,10};
	my_memmove(a+2, a ,12);
	return 0;
}