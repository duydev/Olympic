#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long *a = new long long[n*n];
    for(int i = 0; i < n; i++)
    {
        a[i*n] = a[i*n+i] = 1;
        for(int j = 1; j < i; j++)
            a[i*n+j] = a[(i-1)*n+(j-1)] + a[(i-1)*n+j];
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
            printf("%lld ", a[i*n+j]);
        printf("\n");
    }
    return 0;
}
