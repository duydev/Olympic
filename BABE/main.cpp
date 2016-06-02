#include <stdio.h>

int tonguoc(int n)
{
    int s = 0;
    for(int i = 1; i <= n/2; i++)
        if(n%i==0)
            s+=i;
    return s;
}

int main()
{
    int a, b;
    scanf("%d%d",&a,&b);
    if(tonguoc(a) == b && tonguoc(b) == a)
        printf("YES");
    else
        printf("NO");
    return 0;
}
