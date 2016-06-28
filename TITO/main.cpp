#include <stdio.h>

int main()
{
    double _a, _b;
    scanf("%lf%lf", &_a, &_b);
    long long a, b;
    a = _a - (int) _a > 0 ? (int)_a + 1 : (int) _a;
    b = (int) _b;
    long long tong = ( (b-a+1) * (a+b) ) / 2;

    printf("%lld", tong);
    return 0;
}
