//3. 无重复字符的最长子串
int lengthOfLongestSubstring(char* s) {
    
    int sz = strlen(s);
    int count = 0;
    int left = 0;
    int right = 0;
    
    while (right < sz)
    {
        int num = 1;
       
        for (int i = left; i < right; i++)
        {
            if (s[i] != s[right])
            {
                num++;
            }
            else
            {
                break;
            }                      
        }
        if (num == (right - left + 1))
        {
            if (num > count)
            {
                count = num;
            }
        }
        else
        {
            left++;
            right = left;
        }
        
        right++;
    }
    
    return count;            
}