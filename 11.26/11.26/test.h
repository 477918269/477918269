#define _CRT_SECURE_NO_WARNINGS 1

#ifndef __SEQLIST_H__
#define __SEQLIST_H__
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>




typedef int SLDataType;
typedef struct SeqList
{     
	SLDataType* array;  // ָ��̬���ٵ�����     
	size_t size ;       // ��Ч���ݸ���     
	size_t capicity ;   // �����ռ�Ĵ�С 
}SeqList;


void SeqListInit(SeqList* psl, size_t capacity);//��ʼ��
void SeqListDestory(SeqList* psl);//����
 
void CheckCapacity(SeqList* psl);//�������
void SeqListPushBack(SeqList* psl, SLDataType x);//β�ϲ�������
void SeqListPopBack(SeqList* psl);//β��ɾ������
void SeqListPushFront(SeqList* psl, SLDataType x);//ͷ�ϲ�������
void SeqListPopFront(SeqList* psl);//ͷ��ɾ������
 
int SeqListFind(SeqList* psl, SLDataType x);//����ָ������
void SeqListInsert(SeqList* psl, size_t pos, SLDataType x);//�κ�λ�ò�������
void SeqListErase(SeqList* psl, size_t pos);//ɾ��ĳλ������
void SeqListRemove(SeqList* psl, SLDataType x);//ɾ��ĳ����
void SeqListModify(SeqList* psl, size_t pos, SLDataType x);//�޸�ĳ��λ�õ�����
void SeqListPrint(SeqList* psl);//��ӡ˳���

void TestSeqList(); 




#endif//__SEQLIST_H_