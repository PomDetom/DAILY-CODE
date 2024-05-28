#define _CRT_SECURE_NO_WARNINGS

#include "list.h"

//创建空间
SLTNode* SListCreateSpace(SLTDataType x)
{
	SLTNode* plist = NULL;
	plist = (SLTNode*)malloc(sizeof(SLTNode));
	assert(plist != NULL);
	plist->date = x;
	plist->next = NULL;

	return plist;
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
	SLTNode* plist = SListCreateSpace(x);

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

//链表首	插
void SListPushFront(SLTNode** pphead, SLTDataType x)
{
	SLTNode* plist = SListCreateSpace(x);

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
SLTNode* SListFind(SLTNode* phead, SLTDataType x)
{
	assert(phead != NULL);

	while (phead)
	{
		if (phead->date == x)
		{
			return phead;
		}
		phead = phead->next;
	}
	return NULL;
}

//链表插入
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
	SLTNode* plist = SListCreateSpace(x);

	if (pos == *pphead)
	{
		plist->next = pos;
		*pphead = plist;
	}
	else
	{
		SLTNode* cur = *pphead;
		while (cur->next != pos)
		{
			cur = cur->next;
		}
		cur->next = plist;
		plist->next = pos;
	}
}

//链表擦除
void SListErase(SLTNode** pphead, SLTNode* pos)
{
	if (*pphead == pos)
	{
		*pphead = (*pphead)->next;
		free(pos);
	}
	else
	{
		SLTNode* cur = *pphead;
		
		while (cur->next != pos)
		{
			cur = cur->next;
		}
		cur->next = pos->next;
		free(pos);
	}
}

//链表销毁
void SListDestory(SLTNode** pphead)
{
	assert(*pphead != NULL);

	SLTNode* cur = NULL;
	while (*pphead)
	{
		cur = *pphead;
		*pphead = (*pphead)->next;
		free(cur);
	}
}