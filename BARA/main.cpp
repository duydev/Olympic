#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    if(n<k)
    {
        printf("10");
    }
    else
    {
        if(n%k==0)
        {
            printf("%d", n/k*10);
        }
        else
        {
            if(n%k* 2<=k)
            {
                printf("%d", n/k*10 + 5);
            }
            else
            {
                printf("%d", n/k*10 + 10);
            }
        }
    }
    return 0;
}
