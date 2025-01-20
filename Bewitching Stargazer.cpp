#include<bits/stdc++.h>
using namespace std;

void observe(long long l, long long r, long long k, long long &ans);

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long n, k;
        cin >> n >> k;

        // long long ans = 0;
        // stack<pair<long long, long long>> ranges;
        // ranges.push({1, n});

        // while(!ranges.empty())
        // {
        //     long long l = ranges.top().first;
        //     long long r = ranges.top().second;
        //     ranges.pop();

        //     if(r - l + 1 < k)
        //     {
        //         continue;
        //     }

        //     long long m = (l + r) / 2;
        //     if((r - l + 1) % 2 != 0)
        //     {
        //         ans += m;
        //         if(l != r)
        //         {
        //             ranges.push({l, m - 1});
        //             ranges.push({m + 1, r});
        //         }
        //     }
        //     else
        //     {
        //         ranges.push({l, m});
        //         ranges.push({m + 1, r});
        //     }
        // }

        // cout << ans << endl;

        vector<vector<long long>> dp(n + 1, vector<long long>(n + 1, 0));

        // We fill dp[i][j] by going through all possible intervals [l, r]
        for (long long len = 1; len <= n; ++len) {
            for (long long l = 1; l <= n - len + 1; ++l) {
                long long r = l + len - 1;

                // If the length of the range [l, r] is smaller than k, we don't need to calculate anything
                if (r - l + 1 < k) {
                    dp[l][r] = 0;
                    continue;
                }

                long long m = (l + r) / 2;

                // If the range size is odd, we add the middle element
                if ((r - l + 1) % 2 == 1) {
                    dp[l][r] = m;  // Add the middle element m
                    if (l != r) {
                        dp[l][r] += dp[l][m - 1] + dp[m + 1][r];  // Add the results of the sub-ranges
                    }
                } else {
                    // If the range size is even, we split into two halves
                    dp[l][r] = dp[l][m] + dp[m + 1][r];
                }
            }
        }

        cout << dp[1][n] << endl;
    }

    return 0;
}

void observe(long long l, long long r, long long k, long long &ans)
{
    long long m = (l + r) / 2;
    if(r - l + 1 < k)
    {
        return;
    }

    if((r - l + 1) % 2 == 0)
    {
        observe(l, m, k, ans);
        observe(m + 1, r, k, ans);
    }
    else
    {
        ans += m;
        if(l != r)
        {
            observe(l, m - 1, k, ans);
            observe(m + 1, r, k, ans);
        }
    }
}