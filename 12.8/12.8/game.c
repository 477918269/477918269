#include"game.h"


void AdjustDown(HPDataType* a, size_t n, int root)
{
	int parent = root;
	int child = parent * 2 + 1;
	while(child < (int)n)
	{
		if(a[child+1] < a[child] && child+1 < (int)n)
		{
			child++;
		}
		if(a[parent] > a[child])
		{
			int tmp = a[child];
			a[child] = a[parent];
			a[parent] = tmp;
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

void HeapInit(Heap* hp,HPDataType* _a,int n)
{
	int i = 0;
	hp->_a 	= (HPDataType*)malloc(sizeof(HPDataType)*n);
	hp->_capacity = n;
	hp->_size = n;
	memcpy(hp->_a , _a, sizeof(HPDataType)* n);
	for(i = (hp->_size - 2)/2; i>=0; i--)
	{
		AdjustDown(hp->_a , hp->_size , i);
		
	}
}

void HeapDestroy(Heap* hp)
{
	free(hp->_a );
	hp->_capacity =hp->_size =0;
}

void HeapPrint(Heap* hp)
{
	int i = 0;
	for(i=0; i<hp->_size ; i++)
	{
		printf("%d ",hp->_a [i]);
	}
}

void CheckCapacity(Heap *hp)
{
	if(hp->_capacity == hp->_size )
	{
		Heap* tmp; 
		tmp = realloc(hp->_a , hp->_capacity * 2 * sizeof(HPDataType));
		hp->_a = tmp;
		hp->_capacity *= 2;

	}
}

//void CheckCapacity(SeqList* psl)
//{
//	if(psl->_capicity ==psl->_size )
//	{
//		SLDataType* tmp;
//		tmp = realloc(psl->_array ,psl->_capicity * 2 * sizeof(SLDataType));
//		assert(tmp);
//		psl->_array =tmp;
//		psl->_capicity *= 2;
//	}

void HeapPush(Heap* hp, HPDataType x)
{
	int i = 0;
	hp->_a [hp->_size ] = x; 
	CheckCapacity(hp);
	for(i = (hp->_size - 2)/2; i>=0; i--)
	{
		AdjustDown(hp->_a , hp->_size , i);
		
	}
}




