#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stddef.h>

//�����ã�����
typedef struct stu
{
	char name;
	int year;
	char sex;
	struct stu* dent;//������һ����ַ
}*student;

//�����ṹ��
struct
{
	int a;
	int b;
}x;

//�ṹ���ڴ����
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