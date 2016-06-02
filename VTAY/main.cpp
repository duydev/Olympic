#include <stdio.h>

int main()
{
    int trai = 0;
    int n;
    scanf("%d", &n);
    if( (n/7)%2 != 0 )
    {
        trai = n%7;
    }
     else
     {
        trai = 7 - (n%7);
     }

    printf("%d %d", trai, 7-trai);

    return 0;
}
