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
SLTNode* SListFind(SLTNode* phead, SLTDataType x);

//链表插入
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);

//在某处的后方插入
//void SListInsertAfter(SLTNode* phead, SLTNode* pos, SLTDataType x);

//链表擦除
void SListErase(SLTNode** pphead, SLTNode* pos);

//链表销毁
void SListDestory(SLTNode** pphead);