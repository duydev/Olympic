#include <stdio.h>

int main()
{
    long long n, tmp, max, min, hieu;
    scanf("%lld%lld", &n, &min);
    hieu = -1;
    for(int i = 1; i < n; i++)
    {
        scanf("%lld", &max);
        if(max < min)
        {
            min = max;
            continue;
        }
        tmp = max - min;
        if(tmp > hieu)
        {
            hieu = tmp;
        }
    }
    printf("%lld",hieu);
    return 0;
}
