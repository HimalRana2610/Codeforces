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

        int ans = INT32_MAX;

        for(int i = 0; i < n; i++)
        {
            int sum = i;
            for(int j = i + 1; j < n; j++)
            {
                if(arr[j] > arr[i])
                {
                    sum++;
                }
            }
            ans = min(ans, sum);
        }
        cout << ans << endl;
    }

    return 0;
}