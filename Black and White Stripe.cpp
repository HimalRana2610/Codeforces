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
        int n, k;
        cin >> n >> k;

        string str;
        cin >> str;

        int ans = 0;
        for(int i = 0; i < k; i++)
        {
            if(str[i] == 'W')
            {
                ans++;
            }
        }

        int current = ans;
        for(int i = 1; i < n - k + 1; i++)
        {
            if(str[i - 1] == 'W')
            {
                current--;
            }
            if(str[i + k - 1] == 'W')
            {
                current++;
            }
            ans = min(ans, current);
        }

        cout << ans << "\n";
    }

    return 0;
}