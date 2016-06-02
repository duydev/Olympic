#include <stdio.h>

int main()
{
    int n, tmp, distance = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &tmp);
        if(tmp == 1)
            distance--;
        else
            distance++;
    }
    if(distance < 0)
        distance = distance * -1;
    printf("%d", distance);
}
