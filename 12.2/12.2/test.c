#include"game.h"
int main()
{
	List list;
	ListNode* pos = NULL;
	ListInit(&list);
	//ListPushBack(&list,1);
	//ListPushBack(&list,2);
	//ListPushBack(&list,3);
	//ListPushBack(&list,4);
	//ListPopBack(&list);
	ListPushFront(&list,1);
	ListPushFront(&list,2);
	ListPushFront(&list,3);
	ListPushFront(&list,4);

	ListPopFront(&list);
	//ListPushFront(&list, 30);
	//ListPopFront(&list);
	/*pos = ListFind(&list,2);
	ListInsert(pos,10);
	ListErase(pos);*/
	/*ListRemove(&list,2);*/
	ListPrint(&list);
	ListDestory(&list);
	return 0;
}