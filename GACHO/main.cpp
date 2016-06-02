#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    if(m%2!=0)
    {
        printf("-1");
        return 0;
    }
    int ga, cho;
    cho = (m-2*n)/2;
    ga = n-cho;
    if(ga < 0 || cho < 0)
        printf("-1");
    else
        printf("%d %d",ga, cho);
    return 0;
}
