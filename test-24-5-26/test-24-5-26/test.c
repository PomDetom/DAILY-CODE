#define _CRT_SECURE_NO_WARNINGS

#include "list.h"

//����β�塢βɾ
void SListTest1()
{
	SLTNode* plist = NULL;

	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPushBack(&plist, 5);

	SListDelBack(&plist);
	SListDelBack(&plist);
	SListDelBack(&plist);
	//SListDelBack(&plist);
	//SListDelBack(&plist);

	SListPrint(plist);
}

//�����ײ塢��ɾ
void SListTest2()
{
	SLTNode* plist = NULL;

	SListPushFront(&plist, 1);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 3);
	SListPushFront(&plist, 4);
	SListPushFront(&plist, 5);

	SListDelFront(&plist);
	SListDelFront(&plist);
	SListDelFront(&plist);
	//SListDelFront(&plist);
	//SListDelFront(&plist);

	SListPrint(plist);
}

//���Բ���
void SListTest3()
{
	SLTNode* plist = NULL;

	SListPushBack(&plist, 2);
	SListPushBack(&plist, 5);
	SListPushBack(&plist, 7);
	SListPushBack(&plist, 8);
	SListPushBack(&plist, 1);
	SListPrint(plist);

	SLTDataType x = 3;
	SLTNode* pos = SListFind(plist, x);
	if (pos != NULL)
	{
		printf("\n���ҵ�%d:\n", x);
		SListPrint(pos);
	}
	else
	{
		printf("\nδ���ҵ�%d\n", x);
	}
}

//���Բ���
void SListTest4()
{
	SLTNode* plist = NULL;
	
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPushBack(&plist, 5);
	SListPrint(plist);

	SLTNode* pos1 = SListFind(plist, 1);
	SLTNode* pos2 = SListFind(plist, 3);

	if (pos1)
	{
		SListInsert(&plist, pos1, 66);
		printf("\n��һ�β���:\n");
		SListPrint(plist);
	}
	if (pos2)
	{
		SListInsert(&plist, pos2, 99);
		printf("\n�ڶ��β���:\n");
		SListPrint(plist);
	}
}

//���Բ���
void SListTest5()
{
	SLTNode* plist = NULL;

	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPushBack(&plist, 5);
	SListPrint(plist);

	SLTNode* pos1 = SListFind(plist, 3);
	SLTNode* pos2 = SListFind(plist, 1);
	if (pos1)
	{
		SListErase(&plist, pos1);
		printf("\n��һ�β���֮��\n");
		SListPrint(plist);
	}
	if (pos2)
	{
		SListErase(&plist, pos2);
		printf("\n�ڶ��β���֮��\n");
		SListPrint(plist);
	}
}

//��������
void SListTest6()
{
	SLTNode* plist = NULL;

	SListPushBack(&plist, 2);
	SListPushBack(&plist, 5);
	SListPushBack(&plist, 7);
	SListPushBack(&plist, 8);
	SListPushBack(&plist, 1);
	SListPrint(plist);

	SListDestory(&plist);
	if (plist == NULL)
	{
		printf("\n������\n");
	}
}

int main()
{
	//SListTest1();
	//SListTest2();
	//SListTest3();
	//SListTest4();
	//SListTest5();
	SListTest6();

	return 0;
}