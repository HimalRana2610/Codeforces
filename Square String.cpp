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

        int l = str.length();
        bool flag = true;

        if(l % 2 != 0)
        {
            flag = false;
        }
        else if(str.substr(0, l / 2) != str.substr(l / 2, l / 2))
        {
            flag = false;
        }

        if(flag)
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