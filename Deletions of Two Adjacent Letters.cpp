#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        string str;
        cin >> str;

        char ch;
        cin >> ch;

        bool flag = false;
        for(int i = 0; i < str.length(); i += 2)
        {
            if(str[i] == ch)
            {
                flag = true;
                break;
            }
        }

        if(flag)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}