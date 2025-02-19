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

        vector<int> arr(n + 1);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for(int i = 0; i < n / 2 - 1; i++)
        {
            if(arr[i] == arr[i + 1] || arr[n - i - 2] == arr[n - i - 1])
            {
                swap(arr[i + 1], arr[n - i - 2]);
            }
        }

        int ans = 0;
        for(int i = 0; i < n - 1; i++)
        {
            ans += (arr[i] == arr[i + 1]);
        }
        cout << ans << endl;
    }

    return 0;
}