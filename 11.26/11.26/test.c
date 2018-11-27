#include"test.h"


void SeqListInit(SeqList* psl, size_t capacity)
{
	assert(psl);
	/*psl->array  =(SLDataType*) malloc(sizeof(SLDataType*)capacity);*/
	psl->array = (SLDataType*)malloc(sizeof(SLDataType)*capacity);
	psl->size  = 0;
	psl->capicity =capacity;


}

void SeqListDestory(SeqList* psl)//销毁
{
	assert(psl);
	free(psl->array);
	psl->size = 0;
	psl->capicity = 0;
}

void CheckCapacity(SeqList* psl)//容量检查
{
	;
}

void SeqListPushBack(SeqList* psl, SLDataType x)//尾上插入数据
{
	int end = psl->size -1;

	assert(psl);
	CheckCapacity(psl);
	
	psl->array [psl->size ] = x;
	psl->size ++;

}

void SeqListPopBack(SeqList* psl)//尾上删除数据
{
	assert(psl);
	
	psl->array [psl->size ] = 0;
	psl->size --;
}

void SeqListPushFront(SeqList* psl, SLDataType x)//头上插入数据
{
	
	int end = psl->size -1;
	int begin = 0;
	assert(psl);
	CheckCapacity(psl);
	psl->array [end+1 ] = psl->array [end ];
	psl->array [begin] = x;
	sz++;
}

void SeqListPopFront(SeqList* psl)//头上删除数据
{

}