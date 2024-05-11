#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define OFFSETOF(type, member) (size_t)(((type*)0)->member)

struct student
{
	char name[20];
	int age;
	char sex[5];
	char address[30];
};

int main()
{
	//Ä£ÄâÊµÏÖºêoffsetof
	int ret = 0;

	ret = OFFSETOF(struct student, address);
	printf("%d\n", ret);

	return 0;
}