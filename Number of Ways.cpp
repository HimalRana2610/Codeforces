#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long> sum(n);
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        sum[i] = x;
        if(i > 0)
        {
            sum[i] += sum[i - 1];
        }
    }

    unordered_map<long long, int> mp;
    long long ans = 0;

    for(int i = 0; i < n - 1; i++)
    {
        if(sum[i] % 2 == 0 && (mp.find(sum[i] / 2) != mp.end()))
        {
            ans += mp[sum[i] / 2] * (sum[n - 1] == sum[i] / 2 * 3);
        }
        mp[sum[i]]++;
    }

    cout << ans << endl;
    return 0;
}