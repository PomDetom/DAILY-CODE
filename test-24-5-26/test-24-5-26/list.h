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
SLTNode* SListFind(SLTNode* phead);

////�������
//void SListInsert(SLTNode* phead, SLTNode* pos, SLTDataType x);