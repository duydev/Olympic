#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

bool cmp( int a, int b)
{
    return (ab);
}

int main()
{
    int n, res = 0;
    scanf("%d", &n);
    int *a = new int[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    sort(a, a+n, cmp);
    int j = 0;
    for(int i = 0; i < n; i++)
        if(a[i] > j)
            res += a[i] - j++;
    printf("%d", res);
    return 0;
}
