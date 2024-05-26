#define _CRT_SECURE_NO_WARNINGS

#include "list.h"

//≤‚ ‘Œ≤≤Â°¢Œ≤…æ
void SListTest1()
{
	SLTNode* plist = NULL;

	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPushBack(&plist, 5);

	//SListDelBack(&plist);
	//SListDelBack(&plist);
	//SListDelBack(&plist);
	//SListDelBack(&plist);
	//SListDelBack(&plist);

	SListPrint(plist);
}

//≤‚ ‘ ◊≤Â°¢ ◊…æ
void SListTest2()
{
	SLTNode* plist = NULL;

	SListPushFront(&plist, 1);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 3);
	SListPushFront(&plist, 4);
	SListPushFront(&plist, 5);

	//SListDelFront(&plist);
	//SListDelFront(&plist);
	//SListDelFront(&plist);
	//SListDelFront(&plist);
	//SListDelFront(&plist);

	SListPrint(plist);
}

int main()
{
	//SListTest1();
	SListTest2();
	
	return 0;
}