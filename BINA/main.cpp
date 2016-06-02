#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n==0)
    {
        printf("0");
        return 0;
    }
    string res = "";
    while(n>0)
    {
        res = (char)((n%2)+48) + res;
        n /= 2;
    }
    cout << res;
    return 0;
}
