#include <stdio.h>
#include <iostream>
#include <string.h>
#include <sstream>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input3.txt", "r", stdin);
    freopen("output3.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    long long _n;
    string n;
    cin >> _n;

    stringstream ss;
    ss << _n;
    ss >> n;

    int s = 0;
    for(int i = 0; i < n.length(); i++)
    {
        s += (int) (n[i] - '0');
    }
    if(_n%s==0)
        cout << "1";
    else
        cout << "0";

    return 0;
}
