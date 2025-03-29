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

        vector<int> arr(k);
        for(int i = 0; i < k; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        long long ans = 0;
        for(int i = 0; i < k - 1; i++)
        {
            if(arr[i] == 1)
            {
                ans++;
            }
            else
            {
                ans += (arr[i] - 1) * 2 + 1;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}