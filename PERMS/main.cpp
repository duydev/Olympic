#include <stdio.h>

int x[9];
int m[10];
int n;

int gt(int n)
{
    int res = 1;
    for(int i = 2; i <= n; i++)
        res*=i;
    return res;
}

int init()
{
    for(int i = 0; i < n; i++)
    {
        x[i] = i+1;
        m[i+1] = 0;
    }
}

int printResult()
{
    for(int i = 0; i < n; i++)
        printf("%d", x[i]);
    printf("\n");
}

int isLast()
{
    int i = n-1;
    while(a[i] > a[i-1] && i > 0)
        i--;
    if(i==0)
        return 1;
    return 0;
}

int Try(int i)
{
    for()
}

int main()
{
    scanf("%d", &n);
    printf("%d\n", gt(n));
    init();
    printResult();
    return 0;
}
