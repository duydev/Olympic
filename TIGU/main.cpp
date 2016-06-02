#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int bd = n, nam = 0;
    while(bd < m)
    {
        nam++;
        float lai = ((float)bd*10)/100;
        if( lai - (int)lai >=0.5 )
            bd = bd + (int) lai + 1 ;
        else
            bd = bd + (int) lai;
    }
    printf("%d", nam);
    return 0;
}
