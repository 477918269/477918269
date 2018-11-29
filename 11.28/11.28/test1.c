
#include"game.h"
int main()
{
	SeqList sl;
	SeqListInit(&sl, 10); 
	SeqListPushBack(&sl, 9); 
	SeqListPushBack(&sl, 8);
	SeqListPushBack(&sl, 7);
	SeqListPushBack(&sl, 6);
	SeqListPushBack(&sl, 5);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 1);
	printf("%d\n",SeqListBinaryFind(&sl, 1));
	printf("%d\n",SeqListBinaryFind(&sl, 2));
	printf("%d\n",SeqListBinaryFind(&sl, 3));
	printf("%d\n",SeqListBinaryFind(&sl, 4));
	printf("%d\n",SeqListBinaryFind(&sl, 5));
	printf("%d\n",SeqListBinaryFind(&sl, 6));
	printf("%d\n",SeqListBinaryFind(&sl, 7));
	printf("%d\n",SeqListBinaryFind(&sl, 8));
	printf("%d\n",SeqListBinaryFind(&sl, 9));
	printf("%d\n",SeqListBinaryFind(&sl, 10));

	//SeqListBubbleSort(&sl);
	/*SeqListBinaryFind(&sl, 6);*/
	/*SeqListEmpty(&sl);*/
	/*SeqListPushFront(&sl,30);*/
	/*SeqListErase(&sl, 1);*/
	
	/*SeqListPopFront(&sl);*/

	
	/*SeqListPrint(&sl);*/
	

	



	SeqListDestory(&sl);

	return 0;
}

