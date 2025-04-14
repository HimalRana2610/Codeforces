#include<bits/stdc++.h>
using namespace std;

int cnt_div(int n);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    vector<int> dp;
    dp.push_back(1);

    while(dp.back() <= 1e6)
    {
        dp.push_back(dp.back() + cnt_div(dp.back()));
    }

    while(t--)
    {
        int a, b;
        cin >> a >> b;

        int ans = 0;
        for(int i = 0; i < dp.size(); i++)
        {
            if(dp[i] >= a && dp[i] <= b)
            {
                ans++;
            }
            else if(dp[i] > b)
            {
                break;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}

int cnt_div(int n)
{
    unordered_set<int> s;
    for(int i = 1; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            s.insert(i);
            s.insert(n / i);
        }
    }

    return s.size();
}