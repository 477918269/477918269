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
	if(cur->val == next->val)//cur���¸��ڵ��val��ͬʱ
	{
		next = next->next;
		while(next)//�жϵ�ǰ�ڵ��ֵ���¸��ڵ��ָ�Ƿ���ͬ
		{
			if(next->val != cur->val)
			break;
			next = next->next;
		}
		//������������
		while(cur != next)//ɾ��cur->next���нڵ�
		{
			struct ListNode* temp = cur;
			cur = cur->next;
			free(temp);
		}
		if(prev == NULL)//�����ͷ��ʼ�����ظ������֣���ͷ�ڵ㸳����һ��
		{
			pHead = next;
		}
		else
		{
			prev->next = next;
		}
		if(next)//��������ж�������next == NULL, next->next Ҳ����NULL����ֵ�Ƿ�
			next = next->next;
		
	}
	else//��������£�����ָ���������
	{
		prev->next = cur;
		cur = next;
		next = next->next;
	}
}
return pHead;


//1.��ת�����벿��
//2.�Ƚ�������������ֶ�Ӧλ�õ�ֵ�����ȫ����ȣ�������Ϊһ�����Ľṹ
//1������Ѱ���м�ڵ�
//1������Ѱ���µ�ͷ

