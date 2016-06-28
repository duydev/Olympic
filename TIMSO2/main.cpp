#include <stdio.h>

int main()
{
    int x[10];
    int m, n = 0;
    scanf("%d", &m);
    if(m < 10)
    {
        if(m == 0)
            printf("10");
        else
            printf("%d", m);
        return 0;
    }
    int i = 9;
    while(m > 1)
    {
        if(i == 1)
        {
            printf("-1");
            return 0;
        }
        if(m%i!=0)
        {
            i--;
            continue;
        }
        x[n] = i;
        n++;
        m /= i;
        i = m > 9 ? 9 : m;
    }
    for(int i = n-1; i >= 0; i--)
        printf("%d", x[i]);
    return 0;
}
