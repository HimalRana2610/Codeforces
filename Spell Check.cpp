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

        bool flag = true;
        if(n != 5)
        {
            flag = false;
        }
        else
        {
            set<char> s(str.begin(), str.end());

            if(s.find('T') == s.end() || s.find('i') == s.end() || s.find('m') == s.end() || s.find('u') == s.end() || s.find('r') == s.end())
            {
                flag = false;
            }
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