#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long res = 1;
    for(int i = 2; i <= n; i++)
    {
        res = res * i;
    }
    printf("%lld", res);
    return 0;
}
