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

        string ans = "";
        ans += str[0];

        char ch = str[0];
        for(int i = 1; i < n - 1; i++)
        {
            if(str[i] == ch)
            {
                ans += str[i + 1];
                ch = str[++i];
            }
        }

        cout << ans << "\n";
    }

    return 0;
}