#define _CRT_SECURE_NO_WARNINGS

#include "list.h"

//�����ռ�
SLTNode* SListCreateSpace(SLTDataType x)
{
	SLTNode* plist = NULL;
	plist = (SLTNode*)malloc(sizeof(SLTNode));
	assert(plist != NULL);
	plist->date = x;
	plist->next = NULL;

	return plist;
}

//�����ӡ
void SListPrint(SLTNode* phead)
{
	while (phead)
	{
		printf("%d->", phead->date);
		phead = phead->next;
	}
	printf("NULL");
}

//����β��
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

//������	��
void SListPushFront(SLTNode** pphead, SLTDataType x)
{
	SLTNode* plist = SListCreateSpace(x);

	plist->next = *pphead;
	*pphead = plist;
}

//����βɾ
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

//������ɾ
void SListDelFront(SLTNode** pphead)
{
	assert(*pphead != NULL);
	SLTNode* cur = *pphead;
	cur = cur->next;
	free(*pphead);
	*pphead = cur;
}

//�������
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

//�������
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

//�������
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

//��������
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