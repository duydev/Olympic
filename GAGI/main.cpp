#include <stdio.h>

long haimu(int n)
{
    switch(n)
    {
        case 0:
            return 1;
        case 1:
            return 2;
        case 2:
            return 4;
        case 3:
            return 8;
        case 4:
            return 16;
        case 5:
            return 32;
        case 6:
            return 64;
        case 7:
            return 128;
        case 8:
            return 256;
        case 9:
            return 512;
        case 10:
            return 1024;
    }
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int i = 0;
    while(haimu(i+1)*a<=b)
        i++;
    printf("%d",i--);
    return 0;
}
