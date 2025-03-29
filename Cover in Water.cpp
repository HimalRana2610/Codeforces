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
        int n;
        cin >> n;

        string str;
        cin >> str;

        if(str.find("...") != string::npos)
        {
            cout << 2 << "\n";
            continue;
        }

        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            ans += (str[i] == '.');
        }

        cout << ans << "\n";
    }

    return 0;
}