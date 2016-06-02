#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int s = 0;
    int tmp = n;
    while(tmp > 0)
    {
        s += tmp%10;
        tmp/=10;
    }
    if(s%10==9)
        printf("YES");
    else
        printf("NO");
    return 0;
}
