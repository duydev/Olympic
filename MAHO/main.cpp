#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, sB= "", sE="";
    cin >> s;
    int k;
    cin >> k;
    for(int i = 0; i < s.length(); i++)
    {
        if(sB.length() < k)
        {
            sB = s[i] + sB;
        }
        else
        {
            sE = s[i] + sE;
        }
    }
    cout << sB+sE;
    return 0;
}
