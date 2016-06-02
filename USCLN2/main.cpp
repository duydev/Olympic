#include <stdio.h>

int main()
{
    long long a, b, tmp;
    scanf("%lld%lld", &a, &b);

    while(b != 0)
    {
        tmp = a; // a cu
        a = b; // b cu
        b = tmp%a; // b moi
    }

//    while(a!=b)
//    {
//        if(a>b)
//            a=a-b;
//        if(b>a)
//            b=b-a;
//    }
    printf("%lld",a);
    return 0;
}
