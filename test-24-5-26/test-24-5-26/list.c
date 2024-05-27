#define _CRT_SECURE_NO_WARNINGS

#include "list.h"

//创建空间
void SListCreateSpace(SLTNode** plist, SLTDataType x)
{
	*plist = (SLTNode*)malloc(sizeof(SLTNode));
	assert((*plist) != NULL);
	(*plist)->date = x;
	(*plist)->next = NULL;
}

//链表打印
void SListPrint(SLTNode* phead)
{
	while (phead)
	{
		printf("%d->", phead->date);
		phead = phead->next;
	}
	printf("NULL");
}

//链表尾插
void SListPushBack(SLTNode** pphead, SLTDataType x)
{
	SLTNode* plist = NULL;
	SListCreateSpace(&plist, x);

	if (*pphead == NULL)
	{
		*pphead = plist;
	}
	else
	{
		SLTNode* tail = *pphead;
		while (tail->next)
		{
			tail = tail->next;
		}
		tail->next = plist;
	}
}

//链表首插
void SListPushFront(SLTNode** pphead, SLTDataType x)
{
	SLTNode* plist = NULL;
	SListCreateSpace(&plist, x);

	plist->next = *pphead;
	*pphead = plist;
}

//链表尾删
void SListDelBack(SLTNode** pphead)
{
	SLTNode* tail = *pphead;
	SLTNode* cur = tail;
	assert(tail != NULL);

	if (tail->next == NULL)
	{
		free(tail);
		*pphead = NULL;
	}
	else
	{
		while (tail->next)
		{
			cur = tail;
			tail = tail->next;
		}
		free(tail);
		cur->next = NULL;
	}
}

//链表首删
void SListDelFront(SLTNode** pphead)
{
	assert(*pphead != NULL);
	SLTNode* cur = *pphead;
	cur = cur->next;
	free(*pphead);
	*pphead = cur;
}

//链表查找
SLTNode* SListFind(SLTNode* phead)
{

}

////链表插入
//void SListInsert(SLTNode* phead, SLTNode* pos, SLTDataType x)
//{
//
//}