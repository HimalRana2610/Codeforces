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

        int ans = 0, temp = 0;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] == 0)
            {
                temp++;
            }
            else
            {
                ans = max(ans, temp);
                temp = 0;
            }
        }
        ans = max(ans, temp);

        cout << ans << endl;
    }

    return 0;
}