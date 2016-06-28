#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int *a = new int[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a, a+n);
    int min = 1000000;
    for(int i = 0; i < n-1; i++)
    {
        int tmp = a[i+1] - a[i];
        if(tmp < min)
            min = tmp;
    }
    printf("%d", min);
    return 0;
}
