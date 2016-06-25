#include <stdio.h>

int main()
{
    long long m, n, t;
    scanf("%lld%lld%lld", &m, &n, &t);
    long long k = 0;
    while(k*(m+1) <= n)
        k++;
    k--;
    //printf("%lld\n",k);
    printf("%lld", t*(k*m+(n-k*(m+1))));
    return 0;
}
