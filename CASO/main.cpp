#include <stdio.h>
//#include <iostream>
//#include <algorithm>

//using namespace std;

int findPos(int a[], int n, int v)
{
    for(int i = 0; i < n; i++)
        if(a[i] == v)
            return i;
    return -1;
}

int main()
{
    int n, m, tmp;
    scanf("%d", &n);
    int *a = new int[n];
    int *b = new int[n];
    long long *c = new long long[n];
    long long res = 0;
    m = 0;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &tmp);
        int pos = findPos(a, m, tmp);
        if(pos == -1)
        {
            a[m] = tmp;
            b[m] = 1;
            c[m] = 0;
            m++;
            continue;
        }
        c[pos] += b[pos];
        b[pos]++;
    }
    for(int i = 0; i < m; i++)
        res += c[i];
    printf("%lld", res);
    return 0;
}



//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int *a = new int[n];
//    for(int i = 0; i < n; i++)
//        scanf("%d", &a[i]);
//    sort(a, a+n);
//    long long res = 0;
//    int tmp = a[0];
//    int dem = 1;
//    for(int i = 1; i < n; i++)
//    {
//        if(a[i] != tmp)
//        {
//            tmp = a[i];
//            dem = 1;
//            continue;
//        }
//        dem++;
//        res += dem-1;
//    }
//    printf("%lld", res);
//    return 0;
//}


