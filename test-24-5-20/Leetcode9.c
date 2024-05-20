//9. »ØÎÄÊı
bool isPalindrome(int x) {
    

    if (x < 0)
    {
        return false;
    }
    long int sum = 0;
    long int y = x;
    while (y)
    {
        sum = sum * 10 + y % 10;
        y /= 10;
    }
    if (sum == x)
    {
        return true;
    }
    else
    {
        return false;
    }
}