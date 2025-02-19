#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> arr(n * m);
        for(int i = 0; i < n * m; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end(), greater<int>());

        long long ans = 0;
        for(int i = 0; i < n * m; i++)
        {
            for(int j = 0; j <= i; j++)
            {
                ans += arr[j];
            }
        }

        cout << ans << endl;
    }

    return 0;
}