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

        vector<int> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());
        
        long long sum = 0, ans = -1;
        for(int i = n - 1; i >= 0; i--)
        {
            sum += arr[i];
            if(sum > k)
            {
                sum -= arr[i];
                ans = k - sum;
                break;
            }
            else if(sum == k)
            {
                ans = 0;
                break;
            }
        }

        if(ans == -1)
        {
            ans = k - sum;
        }
        
        cout << ans << endl;
    }

    return 0;
}