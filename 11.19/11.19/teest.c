#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct S 
{    
	int data[1000];    
	int num; 
};
//�ṹ�崫��
struct S s={{1,2,3,4},1000};

void print1(struct S s)
{
	printf("%d\n", s.num);

}
//�ṹ���ַ����
void print2(struct S* ps)
{
	printf("%d", ps->num);
}
 
int main()
{
	print1(s);
	print2(&s);
	return 0;
}