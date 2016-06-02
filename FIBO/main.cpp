#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long a = 1, b=1;
    printf("1 1 ");
    for(int i = 2; i < n; i++)
    {
        b = a + b;
        int tmp = a;
        a = b;
        b = tmp;
        printf("%lld ", a);
    }
    return 0;
}
