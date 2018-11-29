
#include"game.h"

void SeqListInit(SeqList* psl, size_t capacity)
{
	psl->_array   = (SLDataType*)malloc(sizeof(SLDataType)*capacity);
	psl->_size = 0;
	psl->_capicity  =capacity;
}

void SeqListDestory(SeqList* psl)
{
	assert(psl);
	free(psl->_array );
	psl->_array = NULL;
	psl->_size  = 0;
	psl->_capicity  = 0;

}


void CheckCapacity(SeqList* psl)
{
	if(psl->_capicity ==psl->_size )
	{
		SLDataType* tmp;
		tmp = realloc(psl->_array ,psl->_capicity * 2 * sizeof(SLDataType));
		assert(tmp);
		psl->_array =tmp;
		psl->_capicity *= 2;
	}
}

void SeqListPushBack(SeqList* psl, SLDataType x)
{
	assert(psl);
	CheckCapacity(psl);
	psl->_array [psl->_size] = x; 
	psl->_size ++;
	
}

void SeqListPrint(SeqList* psl) 
{
	
	size_t i = 0;
	assert(psl);
	for(i=0;i<psl->_size ;i++)
		printf("%d ", psl->_array [i]);
}

void SeqListPopBack(SeqList* psl)
{
	assert(psl);
	psl->_size --;
}

void SeqListPushFront(SeqList* psl, SLDataType x)
{
	int end = psl->_size -1;
	assert(psl);
	CheckCapacity(psl);
	while(end>=0)
	{
		psl->_array [end+1] = psl->_array [end];
		--end;
	}
	psl->_array[0]  = x; 
	psl->_size++;
}


void SeqListPopFront(SeqList* psl)
{
	size_t end = psl->_size ;
	size_t begin = 0;
	while(begin<end)
	{
		psl->_array[begin] = psl->_array [begin+1];
		begin++;
	}
	psl->_size --;
}

int SeqListFind(SeqList* psl, SLDataType x)
{
	size_t i = 0;
	for(i=0; i<psl->_size ;i++)
	{
		if(psl->_array [i] == x)
			return i;
	}
	return -1;

}

void SeqListInsert(SeqList* psl, size_t pos, SLDataType x)
{
	size_t end = psl->_size;
	while(end>pos)
	{
		psl->_array [end+1] = psl->_array [end];
		end--;
	}
	psl->_array [pos] = x;
	psl->_size ++;
}


void SeqListErase(SeqList* psl, size_t pos)
{
	size_t begin = pos;
	while(begin< psl->_size -1)
	{
		psl->_array [begin] = psl->_array [begin+1];
		begin++;
	}
	psl->_size --;
}


void SeqListEmpty(SeqList* psl)
{
	size_t i = 0;
	assert(psl);
	for(i=0;i<psl->_size -1; i++)
	{
		psl->_array [i] = 0;
		 
	}
	psl->_size  = 0;
}


void SeqListModify(SeqList* psl, size_t pos, SLDataType x)
{
	size_t i = 0;
	assert(psl && pos>psl->_size );
	for(i=0;i<psl->_size ;i++)
	{
		if(psl->_array [i] = psl->_array [pos])
			psl->_array [pos] = x;
	}
	
	
}

void SeqListBubbleSort(SeqList* psl)
{
	size_t i = 0;
	
	for(i=0;i<psl->_size-1 ;i++)
	{
		size_t j = 0;
		for(j=0; j<psl->_size-i-1 ;j++)
		{
			if(psl->_array [j] > psl->_array [j+1])
			{
				size_t tmp = psl->_array [j+1];
				psl->_array [j+1] = psl->_array [j];
				psl->_array [j] = tmp;
			}
		}
	}


}
int SeqListBinaryFind(SeqList* psl, SLDataType x)
{
	size_t begin = 0;
	size_t end = psl->_size -1;
	
	while(begin<=end)
	{
		SLDataType mid = end+(begin-end);
		if(x == psl->_array [mid])
			return mid;
		else if(x < psl->_array [mid])
			end = mid-1;
		else if(x > psl->_array [mid])
			begin = mid+1;
	}
	return 0;
}



