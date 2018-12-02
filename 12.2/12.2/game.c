#include"game.h"
ListNode*  BuyListNode(LTDataType x)
{
	ListNode* code = (ListNode*)malloc(sizeof(ListNode));
	code->_next = NULL;
	code->_prev = NULL;
	code->_data  = x;
	return code;
}

void ListInit(List* plist)
{
	ListNode* head = BuyListNode(0);
	assert(plist);
	
	head->_next = head;
	head->_prev =head;
plist ->_head  = head ;//?
}

void ListDestory(List* plist) 
{
	ListNode* head = plist->_head ;
	ListNode* prev = head->_prev ;
	ListNode* cur = prev->_prev ;
	while(cur!=head)
	{
		free(prev);
		prev = cur;
		cur = cur->_prev ;

	}
}

void ListPushBack(List* plist, LTDataType x)
{
	//ListNode* head = plist->_head ;
	//ListNode* newcode = BuyListNode(x);
	//ListNode* cur = head->_prev  ;
	//assert(plist);
	//head->_prev = newcode;
	//newcode->_next = head;
	//cur->_next =newcode;
	//newcode->_prev = cur;

	ListInsert(plist->_head ,x);
	
	
}

void ListPopBack(List* plist)
{
	//ListNode* head = plist->_head  ;
	//ListNode* cur = head->_prev ;
	//ListNode* prevcur = cur->_prev ;
	//assert(plist);
	//free(cur);
	//prevcur->_next = head;
	//head->_prev =prevcur;
	ListErase(plist->_head );

}
void ListPushFront(List* plist, LTDataType x)
{
	//ListNode* head = plist->_head ;
	//ListNode* next = head->_next ;
	//ListNode* prevnext =  BuyListNode(x);
	//head->_next = prevnext;
	//prevnext->_prev = head;
	//prevnext->_next = next;
	//next->_prev = prevnext;
	ListInsert(plist->_head ,x);

	
}

void ListPopFront(List* plist)
{
	//ListNode* head = plist->_head ;
	//ListNode* next = head->_next ;
	//ListNode* nextnext = next->_next ;
	//free(next);
	//nextnext->_prev = head;
	//head->_next = nextnext;
	ListErase(plist->_head->_next ->_next  );

}

void ListPrint(List* plist)
{
	ListNode* cur = plist->_head ->_next ;
	assert(plist);
	printf("<-head->");
	while(cur != plist->_head )
	{
		printf("<-%d->",cur->_data );
		cur = cur->_next ;
	}
	printf("\n");

}

ListNode* ListFind(List* plist, LTDataType x)
{
	ListNode* cur = plist->_head->_next  ;
	while(cur != plist->_head )
	{
		if(cur->_data == x)
		{
			return cur;
		}
		cur = cur->_next ;
	}
	return NULL;
}
// 在pos的前面进行插入 
void ListInsert(ListNode* pos, LTDataType x)
{
	ListNode* cur =  pos->_prev ;
	ListNode* newcode = BuyListNode(x);
	assert(pos);
	newcode->_next =pos;
	pos->_prev = newcode;
	newcode->_prev = cur;
	cur->_next =newcode;
}

// 删除pos位置的节点 
void ListErase(ListNode* pos)
{
	ListNode* cur = pos ;
	ListNode* prevcur = cur->_prev->_prev   ;
	assert(pos);
	prevcur->_next = cur;
	cur->_prev = prevcur;
}

void ListRemove(List* plist, LTDataType x)
{
	ListNode* cur = plist->_head->_next  ;
	while(cur != plist->_head )
	{
		if(cur->_data  == x)
		{
			ListNode* prev = cur->_prev ;
			ListNode* next = cur->_next ;
			next->_prev = prev;
			prev->_next = next;
		}
		cur = cur->_next ;
	}
}

