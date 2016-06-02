#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int dem = 0;
    for(int i = 1; i <= n; i++)
    {
        if(i%5!=0)
            continue;
        int tmp = i;
        while(tmp%5==0)
        {
            dem++;
            tmp/=5;
        }
    }
    printf("%d", dem);
    return 0;
}
