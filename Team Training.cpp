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
        long long n, x;
        cin >> n >> x;

        vector<long long> arr(n);
        for(long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.rbegin(), arr.rend());

        long long ans = 0, cnt = 0;
        for(long long i = 0; i < n; i++)
        {
            cnt++;
            if(cnt * arr[i] >= x)
            {
                ans++;
                cnt = 0;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}