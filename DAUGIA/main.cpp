#include <stdio.h>

int isPrime(int n)
{
    if(n<=1)
        return 0;
    else if (n<=3)
        return 1;
    else if (n%2==0 || n%3==0)
        return 0;
    int i = 5;
    while(i*i <= n)
    {
        if(n%i==0 || n%(i+2)==0)
            return 0;
        i+=6;
    }
    return 1;
}

int isPalindrom(int n)
{
    int m = 0, tmp = n;
    while(tmp > 0)
    {
        m += tmp%10;
        tmp/=10;
        if(tmp > 0)
            m*=10;
    }
    return (n-m==0);
}

int main()
{
    int a, b, dem = 0;
    scanf("%d%d",&a, &b);
    for(int i = a; i <= b; i++)
        if(isPrime(i) && isPalindrom(i))
        {
            dem++;
            //printf("%d\n",i);
        }
    printf("%d", dem);
    return 0;
}
