#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int km, le, res;
    res = n;
    while(n>=10)
    {
        le = n%10;
        km = n/10*3;
        res += km;
        n = km+le;
    }
    printf("%d",res);
    return 0;
}
