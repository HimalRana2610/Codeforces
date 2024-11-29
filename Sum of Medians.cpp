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

        vector<int> arr(n * k);
        for(int i = 0; i < n * k; i++)
        {
            cin >> arr[i];
        }

        int g = n / 2;
        long long ans = 0;
        for(int i = (n * k) - 1 - g; k > 0; i -= g + 1)
        {
            ans += arr[i];
            k--;
        }

        cout << ans << endl;
    }
    return 0;
}