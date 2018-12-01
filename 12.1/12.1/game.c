#include"game.h"

void SListInit(SList* plist)
{
	assert(plist);
	plist->_head =NULL;
	
}

void SListDestory(SList* plist)
{
	if(plist->_head  == NULL)
	{
		free(plist->_head );
	}
	else
	{
		SListNode* cur = plist->_head ;
		SListNode* next = cur;
		assert(plist);
		while(cur)
		{
			next = next->_next ;
			free(cur);
			cur = next;
		}
		
	}

}

SListNode* BuySListNode(SLTDataType x)
{
	SListNode* code = (SListNode*)malloc(sizeof(SListNode));
	code->_data  = x;
	code->_next  = NULL;
	return code;

}

void SListPushFront(SList* plist, SLTDataType x)
{
	SListNode* newcode = BuySListNode(x);
	if(plist->_head  == NULL)
	{
		plist->_head = newcode;
	}
	else
	{
		newcode->_next = plist->_head ;
		plist->_head =newcode;

	}
}

void SListPopFront(SList* plist)
{
	SListNode* next = plist->_head ->_next ;
	assert(plist);
	plist->_head =next;

}

void SListPushBack(SList* plist, SLTDataType x)
{
	SListNode* tail = plist->_head ;
	SListNode* next = BuySListNode(x);
	while(tail->_next )
	{
		tail = tail->_next ;
	}
	tail->_next = next;
}

void SListPopBack(SList* plist)
{
	SListNode* next = plist->_head ;
	

	while(next->_next ->_next)
	{
		next = next->_next ;
	}
	next->_next =NULL;
}





void SListPrint(SList* plist)
{
	SListNode* cur = plist->_head;
	while(cur != 0)
	{
		printf("%d->", cur->_data );
		cur = cur->_next ;
	}
	printf("NULL\n");

}

SListNode* SListFind(SList* plist, SLTDataType x)
{
	SListNode* cur = plist->_head ;
	while(cur->_data  != x)
	{
		cur = cur->_next ;
	}
	return cur;
	
}

void SListInsertAfter(SListNode* pos, SLTDataType x)
{
	SListNode* tail = pos->_next ;
	SListNode* newcode = BuySListNode(x);

	pos->_next = newcode;
	newcode->_next = tail;

}