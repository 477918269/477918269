#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
	scanf("%s", input);
	if(strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;	
	}
	return 0;
}

// int main()
// {
// 	int a = 10;
// 	int b = 20;
// 	int c = 0;
// 	printf("a = %d b = %d\n",a, b);
// 	//���--���������ƣ�λ���
// 	//01010--b
// 	//10100--
// 	//11110--a
// 	a = a^b;
// 	b = a^b;
// 	a = a^b;
// 	
// // 	a = a-b;
// // 	b = a+b;
// // 	a = b-a;
// 
// // 	c = a;
// // 	a = b;
// // 	b = c;
// 	printf("a = %d b = %d\n",a, b);
// 
// 	return 0;
// }


// 
// int main()
// {
// 	//printf("hehe\n");
// 	//INT_MAX;
// 	int a = 2147483646;
// 	int b = 2147483646;
// 
// 	//int c = (a+b)/2;
// 	int c = 0;
// 	c = a+(b-a)/2;
// 
// 	printf("c = %d\n", c);//2147483646
// 
// 	return 0;
// }