#include<bits/stdc++.h>
using namespace std;

int main()
{
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

        sort(arr.begin(), arr.end());

        int ans = arr[1] - arr[0];
        for(int i = 2; i < n; i++)
        {
            ans = min(ans, arr[i] - arr[i-1]);
        }

        cout << ans << endl;
    }

    return 0;
}