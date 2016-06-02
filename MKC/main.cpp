#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);
    long long tong = 0;
    while(c >= '0' && c <= '9')
    {
        tong += (int)c - 48;
        scanf("%c", &c);
    }
    printf("%lld", tong);
    return 0;
}

