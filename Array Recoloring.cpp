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

        vector<int> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long ans = 0;
        if(k == 1)
        {
            for(int i = 0; i < n - 1; i++)
            {
                ans = max(ans, (long long)arr[i] + arr[n - 1]);
            }
            for(int i = 1; i < n; i++)
            {
                ans = max(ans, (long long)arr[i] + arr[0]);
            }
        }
        else
        {
            sort(arr.rbegin(), arr.rend());
            for(int i = 0; i <= k; i++)
            {
                ans += arr[i];
            }
        }

        cout << ans << "\n";
    }

    return 0;
}