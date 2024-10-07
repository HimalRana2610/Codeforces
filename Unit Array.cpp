#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, one = 0;
        cin >> n;

        vector<int> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] == 1)
            {
                one++;
            }
        }

        int minus = n - one, ans = 0;
        if(minus > one)
        {
            int temp = minus - one;
            if(temp % 2 == 0)
            {
                ans += temp / 2;
                minus -= temp / 2;
                one += temp / 2;
            }
            else
            {
                ans += temp / 2 + 1;
                minus -= temp / 2 + 1;
                one += temp / 2 + 1;
            }
        }
        if(minus % 2 != 0)
        {
            ans++;
        }
        cout << ans << endl;
    }

    return 0;
}