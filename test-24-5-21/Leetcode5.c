//5. 最长回文子串
int judge_palind(char* s, int left, int right)
{
    while (left < right)
    {
        if (s[left] == s[right])
        {
            left++;
            right--;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

char* longestPalindrome(char* s) {
    
    int sz = strlen(s);
    int left = 0;
    int right = 0;
    int lenth = sz;

    while (--lenth)
    {
        for (left = 0; left < sz - lenth; left++)
        {
            right = left + lenth;

            int ret = judge_palind(s, left, right);
            if (ret == 1)
            {
                s[right + 1] = '\0';
                return (s+left);
            }
        }
    }

    *(s + 1) = '\0';
    return s;
}