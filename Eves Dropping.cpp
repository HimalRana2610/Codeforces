#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string x, y;
    cin >> x >> y;

    vector<vector<int>> dp(2 * n + 1, vector<int>(n + 1)), from(2 * n + 1, vector<int>(n + 1));
    dp[0][0] = from[0][0] = 0;

    for(int i = 0; i <= 2 * n; i++)
    {
        for(int j = 0; j <= n; j++)
        {
            dp[i][j] = 0;
            if(j && dp[i][j - 1] > dp[i][j])
            {
                dp[i][j] = dp[i][j - 1];
                from[i][j] = 0;
            }
            if(i && j && x[(i - 1) % n] == y[(j - 1) % n] && dp[i - 1][j - 1] + 1 > dp[i][j])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                from[i][j] = 1;
            }
            if(i && dp[i - 1][j] > dp[i][j])
            {
                dp[i][j] = dp[i - 1][j];
                from[i][j] = 2;
            }
        }
    }

    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        ans = max(ans, dp[i + n][n]);
        int a = i + 1, b = 0;

        while(b <= n && from[a][b] == 0)
        {
            b++;
        }
        for(; b <= n && a <= 2 * n; a++)
        {
            from[a][b] = 0;
            dp[a][n]--;

            if(a == 2 * n)
            {
                break;
            }
            for(; b <= n; b++)
            {
                if(from[a + 1][b] == 2)
                {
                    break;
                }
                if(b + 1 <= n && from[a + 1][b + 1] == 1)
                {
                    b++;
                    break;
                }
            }
        }
    }

    cout << ans << "\n";
    return 0;
}