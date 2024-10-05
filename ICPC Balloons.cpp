#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, ans = 0;
        cin >> n;

        string str;
        cin >> str;

        set<char> s;
        for(int i = 0; i < n; i++)
        {
            if(s.find(str[i]) != s.end())
            {
                ans++;
            }
            else
            {
                s.insert(str[i]);
                ans += 2;
            }
        }

        cout << ans << endl;
    }
    return 0;
}