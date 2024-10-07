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

        int ans = 0;
        for(int i = (n - 1) / 2; arr[i] == arr[(n - 1) / 2] && i < n; i++)
        {
            ans++;
        }
        cout << ans << endl;
    }

    return 0;
}