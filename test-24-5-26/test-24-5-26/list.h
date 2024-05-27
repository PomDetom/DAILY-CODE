#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define SLTDataType int

//定义链表
typedef struct SListNode
{
	SLTDataType date;
	struct SLTNode* next;
}SLTNode;

//链表打印
void SListPrint(SLTNode* phead);

//链表尾插
void SListPushBack(SLTNode** pphead, SLTDataType x);

//链表首插
void SListPushFront(SLTNode** pphead, SLTDataType x);

//链表尾删
void SListDelBack(SLTNode** pphead);

//链表首删
void SListDelFront(SLTNode** pphead);

//链表查找
SLTNode* SListFind(SLTNode* phead);

////链表插入
//void SListInsert(SLTNode* phead, SLTNode* pos, SLTDataType x);