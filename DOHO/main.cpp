#include <stdio.h>

int main()
{
    int h, p, s, h1, p1, s1;
    scanf("%d%d%d",&h,&p,&s);
    s1 = s+1;
    p1 = p;
    h1 = h;
    if(s1>59)
    {
        s1=0;
        p1++;
        if(p1>59)
        {
            p1=0;
            h1++;
            if(h1>23)
                h1=0;
        }
    }
    printf("%d %d %d", h1, p1, s1);
    return 0;
}
