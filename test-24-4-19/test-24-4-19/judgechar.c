#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int judge_char(char str1[], char str2[])
{
	int len = strlen(str1);
	if (strlen(str2) != len)
	{
		return 0;
	}
	strncat(str1, str1, len);
	char* ret = strstr(str1, str2);

	if (ret == NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}

}

int main()
{
	//�ж�һ�������е��ַ����Ƿ�Ϊ��һ�������ת��
	char arr1[20] = { "abcdefg" };
	char arr2[] = { "defgabc" };

	int ret = judge_char(arr1, arr2);
	if (ret == 1)
	{
		printf("��");
	}
	else
	{
		printf("����");
	}

	return 0;
}