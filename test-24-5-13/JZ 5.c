/**
 * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
 *
 * 
 * @param s string�ַ��� 
 * @return string�ַ���
 */

char* replaceSpace(char* s ) {
    // write code here
    int sz1 = strlen(s);
    int i = 0;
    int j = 0;
    int count = 0;

    for (i = 0; i < sz1; i++)
    {
        if (*(s + i) == ' ')
        {
            count++;
        }
    }
    int sz2 = sz1 + 2*count;

    char* ret = NULL;
    ret = (char*)malloc(sizeof(int)*(sz2 + 1));
    for (i = 0, j = 0; i < sz1; i++, j++)
    {
        if (*(s + i) != ' ')
        {
            *(ret + j) = *(s + i);
        }
        else
        {
            *(ret + j) = '%';
            *(ret + ++j) = '2';
            *(ret + ++j) = '0';
        }
    }

    return ret;
}