#define _CRT_SECURE_NO_WARNINGS 1

#ifndef __SEQLIST_H__
#define __SEQLIST_H__
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>




typedef int SLDataType;
typedef struct SeqList
{     
	SLDataType* array;  // 指向动态开辟的数组     
	size_t size ;       // 有效数据个数     
	size_t capicity ;   // 容量空间的大小 
}SeqList;


void SeqListInit(SeqList* psl, size_t capacity);//初始化
void SeqListDestory(SeqList* psl);//销毁
 
void CheckCapacity(SeqList* psl);//容量检查
void SeqListPushBack(SeqList* psl, SLDataType x);//尾上插入数据
void SeqListPopBack(SeqList* psl);//尾上删除数据
void SeqListPushFront(SeqList* psl, SLDataType x);//头上插入数据
void SeqListPopFront(SeqList* psl);//头上删除数据
 
int SeqListFind(SeqList* psl, SLDataType x);//查找指定数据
void SeqListInsert(SeqList* psl, size_t pos, SLDataType x);//任何位置插入数据
void SeqListErase(SeqList* psl, size_t pos);//删除某位置数据
void SeqListRemove(SeqList* psl, SLDataType x);//删除某数据
void SeqListModify(SeqList* psl, size_t pos, SLDataType x);//修改某个位置的数据
void SeqListPrint(SeqList* psl);//打印顺序表

void TestSeqList(); 




#endif//__SEQLIST_H_