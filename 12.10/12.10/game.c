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
	hp->_a = NULL;
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

//void CheckCapacity(Heap *hp)
//{
//	if(hp->_capacity <= hp->_size )
//	{
//		HPDataType* tmp; 
//		tmp = realloc(hp->_a , hp->_capacity * 2 * sizeof(HPDataType));
//		hp->_a = tmp;
//		hp->_capacity *= 2;
//
//	}
//}

void AdjustUp(HPDataType* a, size_t n, int child)
{
	int parent = (child-1)/2;
	while(child > 0)
	{
		if(a[parent] > a[child])
		{
			HPDataType cur = a[parent];
			a[parent] = a[child];
			a[child] = cur;

			child = parent;
			parent = (child-1)/2;
		}
		else
		{
			break;
		}
	}

}

void HeapPush(Heap* hp, HPDataType x)
{
	assert(hp);
	if(hp->_size == hp->_capacity )
	{
		HPDataType* tmp; 
		tmp = (HPDataType*)realloc(hp->_a , hp->_capacity * 2 * sizeof(HPDataType));
		hp->_a = tmp;
		hp->_capacity *= 2;
	}
	hp->_a [hp->_size ] = x;
	hp->_size ++;

	AdjustUp(hp->_a ,hp->_size ,hp->_size  -1);
}

void HeapPop(Heap* hp)
{
	HPDataType code = hp->_a [hp->_size -1];
	hp->_a [hp->_size -1] = hp->_a [0];
	hp->_a [0] = code;
	hp->_size --;
	AdjustDown(hp->_a , hp->_size , 0);
}

int HeapEmpty(Heap* hp)
{
	
	return hp->_size == 0? 1:0;
}

int HeapSize(Heap* hp)
{
	return hp->_size ;
}

//½µÐò->Ð¡¶ÑÐÎÊ½
void HeapSort(int* a, int n)
{
	int i;
	int end = n - 1;
	for(i=(n - 2)/2; i>=0; i--)
	{
		AdjustDown(a ,n ,i);
	}

	while(end > 0)
	{
		int cur = a[end];
		a[end] = a[0];
		a[0] = cur;
		

		AdjustDown(a,end,0);
		end--;
	}
		
}


void HeapTop(Heap* hp)

