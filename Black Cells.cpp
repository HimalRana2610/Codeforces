#include<bits/stdc++.h>
using namespace std;

bool possible(int n, vector<long long> &arr, long long k);

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<long long> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long left = 0, right = (long long)1e18;
        long long ans = right;

        while(left <= right)
        {
            long long mid = left + (right - left) / 2;
            if(possible(n, arr, mid))
            {
                ans = mid;
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}

bool possible(int n, vector<long long> &arr, long long k)
{
    vector<bool> dp0(n + 1, false);
    vector<bool> dp1(n + 1, false);

    dp0[0] = true;
    for(int i = 0; i < n; i++)
    {
        vector<bool> next0(n + 1, false);
        vector<bool> next1(n + 1, false);

        if(dp0[i])
        {
            if(i + 1 < n && abs(arr[i + 1] - arr[i] <= k))
            {
                next0[i + 2] = true;
            }
            if(k >= 1)
            {
                next1[i + 1] = true;
            }
        }
        if(dp1[i])
        {
            if(i + 1 < n && abs(arr[i + 1] - arr[i] <= k))
            {
                next1[i + 2] = true;
            }
        }

        for(int j = 0; j <= n; j++)
        {
            if(next0[j])
            {
                dp0[j] = true;
            }
            if(next1[j])
            {
                dp1[j] = true;
            }
        }
    }
    return dp0[n] || dp1[n];
}