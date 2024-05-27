#define _CRT_SECURE_NO_WARNINGS

#include "list.h"

//�����ռ�
void SListCreateSpace(SLTNode** plist, SLTDataType x)
{
	*plist = (SLTNode*)malloc(sizeof(SLTNode));
	assert((*plist) != NULL);
	(*plist)->date = x;
	(*plist)->next = NULL;
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

//�����ײ�
void SListPushFront(SLTNode** pphead, SLTDataType x)
{
	SLTNode* plist = NULL;
	SListCreateSpace(&plist, x);

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
SLTNode* SListFind(SLTNode* phead)
{

}

////�������
//void SListInsert(SLTNode* phead, SLTNode* pos, SLTDataType x)
//{
//
//}