#include <bits/stdc++.h>
using namespace std;

int solve(int n, string l, string r, vector<vector<vector<int>>> &dp, int pos, int sl, int sr);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        string l, r;
        cin >> l >> r;

        int n = l.size();
        vector<vector<vector<int>>> dp(11, vector<vector<int>>(2, vector<int>(2, -1)));

        int ans = solve(n, l, r, dp, 0, 1, 1);
        cout << ans << "\n";
    }

    return 0;
}

int solve(int n, string l, string r, vector<vector<vector<int>>> &dp, int pos, int sl, int sr)
{
    if (pos == n)
    {
        return 0;
    }

    if (dp[pos][sl][sr] != -1)
    {
        return dp[pos][sl][sr];
    }

    dp[pos][sl][sr] = INT_MAX;
    int low = (sl ? (l[pos] - '0') : 0), high = (sr ? (r[pos] - '0') : 9);

    for (int i = low; i <= high; i++)
    {
        int cost = (i == (l[pos] - '0')) + (i == (r[pos] - '0'));
        dp[pos][sl][sr] = min(dp[pos][sl][sr], cost + solve(n, l, r, dp, pos + 1, sl && (i == (l[pos] - '0')), sr && (i == (r[pos] - '0'))));
    }

    return dp[pos][sl][sr];
}