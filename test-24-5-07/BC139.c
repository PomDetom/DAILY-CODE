#include <stdio.h>

int main()
{
    int arr[10][10] = { 0 };
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);

    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int k = 0;
    char t = 0;
    int a = 0;
    int b = 0;
    int tmp = 0;
    scanf("%d", &k);
    while (k--)
    {
        scanf(" %c %d %d", &t, &a, &b);
        a--;
        b--;
        if (t == 'r')
        {
            for (i = 0; i < m; i++)
            {
                tmp = arr[a][i];
                arr[a][i] = arr[b][i];
                arr[b][i] = tmp;
            }
        }
        else if (t == 'c')
        {
            for (i = 0; i < n; i++)
            {
                tmp = arr[i][a];
                arr[i][a] = arr[i][b];
                arr[i][b] = tmp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}