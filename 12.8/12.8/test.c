#include"game.h"
int main()
{
	Heap hp;
	HPDataType a[] = {27,15,19,18,28,34,65,49,25,37};
	int pos = sizeof(a)/sizeof(a[0]) ;
	HeapInit(&hp, a, pos);
	HeapPrint(&hp);
	HeapDestroy(&hp);

	return 0;
}

