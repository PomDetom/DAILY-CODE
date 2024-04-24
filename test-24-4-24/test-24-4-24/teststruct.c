#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stddef.h>

//自引用；链表
typedef struct stu
{
	char name;
	int year;
	char sex;
	struct stu* dent;//链表下一个地址
}*student;

//匿名结构体
struct
{
	int a;
	int b;
}x;

//结构体内存对齐
struct s1
{
	char a;
	char b;
	int c;
};

#pragma pack(1)
struct s1_1
{
	char a;
	char b;
	int c;
};
#pragma pack()

struct s2
{
	char a;
	int b;
	char c;
};

struct s3
{
	double a;
	int b;
	char c;
};

struct s4
{
	int a;
	struct s3 s3;
	char b;
};

int main()
{
	printf("%d\n", (int)sizeof(struct s1));
	printf("%d\n", (int)sizeof(struct s1_1));
	printf("%d\n", (int)sizeof(struct s2));
	printf("%d\n", (int)sizeof(struct s3));
	printf("%d\n", (int)sizeof(struct s4));

	return 0;
}