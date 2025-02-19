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

        vector<int> arr(n + 1);
        arr[0] = 0;
        for(int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        int ans = 0, cans = 0;
        for(int i = 1; i <= n; i++)
        {
            if((cans + n - i + 1) * (arr[i] - arr[i - 1]) >= k)
            {
                ans += k - cans;
                break;
            }

            ans += (n - i + 1) * (arr[i] - arr[i - 1]) + 1;
            cans += (n - i + 1) * (arr[i] - arr[i - 1]);
        }

        cout << ans << endl;
    }

    return 0;
}