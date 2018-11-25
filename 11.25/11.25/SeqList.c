#include "SeqList.h"

void SeqListInit(SeqList *ps, size_t capacity)
{
	ps->_array =(SLDataType*)malloc(sizeof(SLDataType)*capacity);
	ps->_size = 0;
	ps->_capacitu = capacity;
}




void SeqListInsert(SeqList* ps, size_t pos, SLDataType x)
{
	assert(ps && pos<=pcon->sz);//???
	//ÔöÈÝ
	size_t end = pc->sz;
	while(end>pos)
	{
		pc->_array[end+1] = pc->_array[end];
		--end;
	}
	pc->_array[pos] = x;
	pc->sz++;


}
 


