#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string str;
        cin >> str;

        if((str[0] != 'a' && str[1] != 'b' && str[2] == 'c') || (str[0] != 'a' && str[1] == 'b' && str[2] != 'c') || (str[0] == 'a' && str[1] != 'b' && str[2] != 'c') || (str == "abc"))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}