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
        long long n, m, k;
        cin >> n >> m >> k;

        long long low = 1, high = m, ans = m;
        while(low <= high)
        {
            long long mid = (low + high) / 2;
            long long full = m / (mid + 1), extra = m % (mid + 1);
            long long row = full * mid + extra;

            if(n * row >= k)
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