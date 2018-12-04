#define _CRT_SECURE_NO_WARNINGS 1
struct ListNode* lesshead; *ltail;
struct ListNode* greathead; * 
struct cur = pHead;
lhead = lreathead = (struct ListNode*) malloc (sizeof(struct ListNode));
gtail = greathead  = (struct ListNode*) malloc (sizeof(struct ListNode));
while(cur)
{
	if(cur->val <x)
	{
		ltail->next = cur;
		ltail = ltail->next;

	}
	else
	{
		gtali->next = cir;
		gtail = gtial->next;
	}
	cur = cur->next;
}
ltail->next = ghead->next; 
gtail->next = NULL;
pHead = lesshead->next;
free(ghead);
free(lhead);



struct ListNode* cur = pHead;
struct ListNode* next = cur->next;
struct ListNode* prev = NULL;
if(cur == NULL || next == NULL)
return cur;
while(cur)
{
	if(cur->val == next->val)//cur和下个节点的val相同时
	{
		next = next->next;
		while(next)//判断当前节点的值和下个节点的指是否相同
		{
			if(next->val != cur->val)
			break;
			next = next->next;
		}
		//重新连接链表
		while(cur != next)//删除cur->next所有节点
		{
			struct ListNode* temp = cur;
			cur = cur->next;
			free(temp);
		}
		if(prev == NULL)//如果从头开始就是重复的数字，将头节点赋给下一个
		{
			pHead = next;
		}
		else
		{
			prev->next = next;
		}
		if(next)//如果不加判断条件，next == NULL, next->next 也等于NULL，赋值非法
			next = next->next;
		
	}
	else//正常情况下，三个指针依次向后。
	{
		prev->next = cur;
		cur = next;
		next = next->next;
	}
}
return pHead;


//1.逆转链表后半部分
//2.比较链表其后两部分对应位置的值，如果全部相等，则链表为一个回文结构
//1个函数寻找中间节点
//1个函数寻找新的头

