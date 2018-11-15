#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//char* my_strncpy(char* dest, const char* str, int count)
//{
//	char* cp = (char*)dest;
//	while(count-- && *dest && *str)
//	{
//		*dest  = *str;
//		dest++;
//		str++;
//	}
//	return cp; 
//}
//int main()
//{
//	char s[] ="abcdefg";
//	char* ret = my_strncpy(s,"hello",4);
//	printf("%s", ret);
//	return 0;
//}
//char* my_strncat(char* dest, char* str, int count)
//{
//	char* cp = (char*)dest;
//	while(*dest)
//	{
//		dest++;
//	}
//
//	while(count--)
//	{
//		*dest = *str;
//		dest++;
//		str++;
//	}
//	return cp;
//	
//}
//int main()
//{
//	char s[20] = "abc";
//	char* ret = my_strncat(s, "bit", 2);
//	printf("%s", ret);
//	return 0;
//}
//

#include<string.h>
#include<assert.h>
char* my_strncmp(char* dest,char* str, int count)
{

	
		while(dest && *dest == *str && str&& count--)
		{
			dest++;
			str++;
		}
		if(*dest == *str )
			return (char*) 0;
		else if(*dest != *str || *dest == '\0')
			return (char*) -1;
		else if(*str = '\0')
			return (char*) 1;
		return 0;
	
}
int main()
{
	char s[] = "abcdef";
	char s1[] = "abcd";
	char* ret = my_strncmp(s,s1,5);
	printf("%d", ret);
	return 0;
}
