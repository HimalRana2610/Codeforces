#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, ans = 1, zero = 0;
        cin >> n;

        vector<int> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] != 0)
            {
                ans *= arr[i];
            }
            else if(arr[i] == 0)
            {
                zero++;
            }
        }

        if(zero >= 2)
        {
            cout << 0 << endl;
        }
        else if(zero == 1)
        {
            cout << ans << endl;
        }
        else
        {
            int m = *min_element(arr.begin(), arr.end());
            cout << ans / m * (m + 1) << endl;
        }
    }
}