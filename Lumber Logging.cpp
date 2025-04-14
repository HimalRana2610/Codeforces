#include<bits/stdc++.h>
using namespace std;

bool is_possible(vector<long long> arr, long long mid, long long m);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        long long n, m;
        cin >> n >> m;

        vector<long long> arr(n);
        long long sum = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        long long low = *min_element(arr.begin(), arr.end()), high = sum, ans = sum;
        while(low <= high)
        {
            long long mid = low + (high - low) / 2;
            if(is_possible(arr, mid, m))
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}

bool is_possible(vector<long long> arr, long long mid, long long m)
{
    long long ans = 0;
    for(int i = 0; i < arr.size(); )
    {
        long long current = mid;
        if(ans > m || arr[i] > current)
        {
            return false;
        }

        ans++;
        while(arr[i] <= current)
        {
            current -= arr[i++];
        }
    }

    return ans <= m;
}