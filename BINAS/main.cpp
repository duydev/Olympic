#include <stdio.h>

int n;
int* x;

void init()
{
    x = new int[n];
    for(int i = 0; i < n; i++)
        x[i] = 0;
}

void printX()
{
    for(int i = 0; i < n; i++)
        printf("%d", x[i]);
    printf("\n");
}

int isLast()
{
    int i = n-1;
    while(x[i] == 1)
        i--;
    return i < 0;
}

int main()
{
    scanf("%d", &n);
    init();
    printX();
    while(!isLast())
    {
        int i = n-1;
        while(x[i]!=0)
        {
            x[i] = 0;
            i--;
        }
        x[i] = 1;
        printX();
    }
}
