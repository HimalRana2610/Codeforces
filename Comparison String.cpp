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

        int ans = 1, current = 1;
        for(int i = 1; i < n; i++)
        {
            if(str[i] != str[i - 1])
            {
                current = 1;
            }
            else
            {
                current++;
            }
            ans = max(ans, current);
        }

        cout << ans + 1 << "\n";
    }

    return 0;
}