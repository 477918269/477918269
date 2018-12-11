#include"game.h"
int main()
{
	//Heap hp;
	//HPDataType a[] = {27,15,19,18,28,34,65,49,25,37};
	//int pos = sizeof(a)/sizeof(a[0]) ;
	//HeapInit(&hp, a, pos);
	//HeapPush(&hp,1);
	//HeapPop(&hp);
	//HeapPrint(&hp);
	//HeapDestroy(&hp);
	//int a[] = {20,17,4,16,5,3,21};
	///*int a[] = {1,2,3,4,5,6,7,8};*/

	//int pos = sizeof(a)/sizeof(a[0]);
	//int i = 0;
	//HeapSort(a, pos);
	//for(i=0; i< pos; i++)
	//{
	//	printf("%d ", a[i]);
	//}
	/*HeapSort(&a,pos);*/
	
	const int N = 10000;
	const int K = 100;
	int* a = malloc(sizeof(int)*K);
	int i = 0;

	for(i=0; i<N; i++)
	{
		a[i]= rand()%10000;
	}

	for(i=(K-2)/2; i>=0; i--)
	{
		AdjustDown(a, K, i);
	}


	if(a[i] > a[0])
	{
		HeapPush(a, a[i]);
		HeapPop(a);

	}


1





	return 0;
}

