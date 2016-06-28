#include <stdio.h>

int bs(int a[], int n, int v)
{
    int l = 0, r = n-1, mid;
    while(l <= r)
    {
        mid = (l+r)/2;
        if(v == a[mid])
            return v;
        if(v < a[mid])
            r = mid - 1;
        if( v > a[mid])
            l = mid + 1;
    }
    return -1;
}

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int *a = new int[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(int r = n-1; r>=0; r--)
    {
        int res = bs(a, r, a[r]-m);
        if(res != -1)
        {
            printf("%d %d",res, a[r]);
            return 0;
        }
    }
    printf("%d", -1);
    return 0;
}
