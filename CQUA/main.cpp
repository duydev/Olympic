#include <stdio.h>

int main()
{
     freopen("input4.txt", "r", stdin);
     freopen("output4.txt", "w", stdout);
    int n;
    scanf("%d", &n);
    int a = 0, b = 0;
    for(int i = 0; i < n; i++)
    {
        int tmp;
        scanf("%d", &tmp);
        if(tmp == 100)
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    if(a == 0)
    {
        if(b%2==0)
        {
            printf("YES");
        } else {
            printf("NO");
        }
        return 0;
    }
    if(b == 0)
    {
        if(a%2==0)
        {
            printf("YES");
        } else {
            printf("NO");
        }
        return 0;
    }
    if(a%2==0)
        {
            printf("YES");
        } else {
            printf("NO");
        }
    return 0;
}
