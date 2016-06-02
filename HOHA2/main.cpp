#include <stdio.h>

int main()
{
    long long n;
    scanf("%lld", &n);
    if(n==6)
    {
        printf("YES");
        return 0;
    }
    long long i = 1;
    long long s = 0;
    while(s < n)
    {
        //printf("%lld^3+", i);
        s += i * i * i;
        i+=2;
    }
    if(s==n)
        printf("YES");
    else
        printf("NO");
    return 0;
}
