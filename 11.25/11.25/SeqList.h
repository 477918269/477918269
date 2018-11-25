#pragma once
#include<stdio.h>
typdef int SLdataType;

typedef int SeqList
{
	SLDataType* _array;
	size_t _size;
	size_t _capacity;
}SeqList;

void SeqListInit(SeqList* ps, size_t capacity;
void SeqListdDestory(SeqList* ps);

void SeqListPushBack(SeqList* ps, SLDataType x);
void SeqListPopBack(SeqList* ps)

void SeqListPushFront(SeqList* ps, SLDataType x);
void SeqListPopFront(SeqList* ps);

void SeqListInsert(SeqList* ps, size_t pos, SLDataType);
void SeqListPushFront(SeqList* ps, SLDataType x);
int SeqListPushFind(SeqList* ps, SLDataType x);


void SeqListTest();