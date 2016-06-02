#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        int x, tmp, dao = 0;
        scanf("%d", &x);
        if(x/10==0)
        {
            printf("%d ", x);
            continue;
        }
        tmp = x;
        while(tmp > 0)
        {
            dao += tmp%10;
            tmp/=10;
            dao*=10;
        }
        dao /= 10;
        if(x-dao==0)
        {
            printf("%d ", x);
        }
    }
    return 0;
}
