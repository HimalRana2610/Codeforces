#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        map<int, long long> profit;
        for(int i = 0; i < k; i++)
        {
            int b, c;
            cin >> b >> c;
            profit[b] += c;
        }

        vector<pair<int, long long>> pr(profit.begin(), profit.end());
        sort(pr.begin(), pr.end(), [](const auto &a, const auto &b){return a.second > b.second;});

        long long ans = 0;
        for(const auto &p : pr)
        {
            if(n == 0)
            {
                break;
            }
            ans += p.second;
            n--;
        }
        cout << ans << endl;
    }

    return 0;
}