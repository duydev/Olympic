#include <stdio.h>
#include <string.h>

int main()
{
    int c[100];
    memset(c, 0, sizeof(int) * 100);
    char ch;
    int dem = 0;
    while(true)
    {
         ch = getchar();
         if(ch == '\n')
            break;
         if(c[ch - ' '])
            continue;
         c[ch - ' '] = 1;
         dem++;
    }
    printf("%d", dem);
    return 0;
}
