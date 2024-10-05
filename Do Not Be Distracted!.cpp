#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        string str;
        cin >> str;

        set<char> s;
        s.insert(str[0]);

        bool flag = true;
        for(int i = 1; i < n; i++)
        {
            auto it = s.find(str[i]);
            if(str[i] != str[i - 1] && it != s.end())
            {
                flag = false;
                break;
            }
            s.insert(str[i]);
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