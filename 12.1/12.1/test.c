
#include"game.h"
int main()
{
	SListNode* pos; 
	SList list;
	SListInit(&list);
	SListPushFront(&list,1);
	SListPushFront(&list,2);
	SListPushFront(&list,3);
	SListPushFront(&list,4);
	SListPushFront(&list,5);
	SListPushBack(&list,10);
	/*SListPopFront(&list);*/
	/*SListPopBack(&list);*/
	pos = SListFind(&list,3);
	SListInsertAfter(pos,30);




	SListPrint(&list);
	SListDestory(&list);
	return 0;
}
