#include <stdio.h>
#include <math.h>

int main()
{
    long long n;
    scanf("%lld", &n);
    if(n < 4)
    {
        if(n>1)
            printf("YES");
        else
            printf("NO");
        return 0;
    }
    if(n%2==0)
    {
        printf("NO");
        return 0;
    }
    for(int i = 2; i <= sqrt(n); i++)
        if(n%i==0)
        {
            printf("NO");
            return 0;
        }
    printf("YES");
    return 0;
}
