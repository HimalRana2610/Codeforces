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
        int n;
        cin >> n;

        vector<int> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long sum = 0, m = arr[0];
        int ans = 0;

        for(int i = 0; i < n; i++)
        {
            sum += arr[i];
            m = max(m, (long long)arr[i]);

            if(m == sum - m)
            {
                ans++;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}