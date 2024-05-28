#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define SLTDataType int

//��������
typedef struct SListNode
{
	SLTDataType date;
	struct SLTNode* next;
}SLTNode;

//�����ӡ
void SListPrint(SLTNode* phead);

//����β��
void SListPushBack(SLTNode** pphead, SLTDataType x);

//�����ײ�
void SListPushFront(SLTNode** pphead, SLTDataType x);

//����βɾ
void SListDelBack(SLTNode** pphead);

//������ɾ
void SListDelFront(SLTNode** pphead);

//�������
SLTNode* SListFind(SLTNode* phead, SLTDataType x);

//�������
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);

//��ĳ���ĺ󷽲���
//void SListInsertAfter(SLTNode* phead, SLTNode* pos, SLTDataType x);

//�������
void SListErase(SLTNode** pphead, SLTNode* pos);

//��������
void SListDestory(SLTNode** pphead);