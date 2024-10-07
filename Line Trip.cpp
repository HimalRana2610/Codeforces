#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if(n == 1)
        {
            cout << max(arr[0], 2 * (x - arr[n - 1])) << endl;
        }
        else
        {
            int m = arr[0];
            for(int i = 1; i < n; i++)
            {
                m = max(m, arr[i] - arr[i - 1]);
            }
            cout << max(m, 2 * (x - arr[n - 1])) << endl;
        }
    }

    return 0;
}