#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <errno.h>

int main()
{
	//��
	//fp = fopen("test.txt", "r");
	//if (fp == NULL)
	//{
	//	printf("%s\n", strerror(errno));
	//	return 1;
	//}

	//FILE* fp = fopen("test.txt", "w");
	FILE* fp = fopen("test.txt", "a");

	//����
	//fputs("Hello World\n", fp);
	//char i = 0;
	//for (i = 'a'; i <= 'z'; i++)
	//{
	//	fputc(i, fp);
	//}
	fputs("goodbye\n", fp);
	//�ر�
	fclose(fp);
	fp = NULL;

	return 0;
}