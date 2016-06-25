#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    int n;
    scanf("%d", &n);
    int* a = new int[n];
    for(int i = 0;  i < n; i++)
        scanf("%d", &a[i]);
    sort(a, a+n);
    int cao = 0;
    for(int i = 0;  i < n; i++)
        if(a[i]>=cao)
            cao++;
    printf("%d", cao);
    return 0;
}
