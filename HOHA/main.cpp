#include <stdio.h>
#include <math.h>

int main()
{
    long long n, s = 1;
    scanf("%lld", &n);
    for(int i = 2; i < sqrt(n); i++)
    {
        if(n%i==0)
        {
            s += i + (n/i);
        }
    }
    if(n==s)
        printf("YES");
    else
        printf("NO");
    return 0;
}
