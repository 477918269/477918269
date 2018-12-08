#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>


typedef int HPDataType;
typedef struct Heap
{
	HPDataType* _a;
	int _size;
	int	_capacity;
}Heap;

void HeapInit(Heap* hp,HPDataType* _a,int n);
void HeapDestroy(Heap* hp);
void AdjustDown(HPDataType* a, size_t n, int root);
void HeapPush(Heap* hp, HPDataType x);
void HeapPop(Heap* hp);
void HeapPrint(Heap* hp);
void CheckCapacity(Heap *hp);

