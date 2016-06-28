#include <stdio.h>

int main()
{
    char c;
    int tong = 0;
    while(true)
    {
        c = getchar();
        if(c == '\n' || c == ' ')
            break;
        tong += (int)(c-'0');
        if(tong > 9)
            tong = (tong%10) + (tong/10);
    }
    printf("%d", tong);
    return 0;
}
