#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int *a = new int[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i < m - a[j])
                printf(".");
            else
                printf("#");
        }
        printf("\n");
    }
    return 0;
}
