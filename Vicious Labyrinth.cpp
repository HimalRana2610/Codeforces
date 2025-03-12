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

        if(k % 2 == 0)
        {
            vector<int> ans(n, n - 1);
            ans[n - 2] = n;

            for(int i = 0; i < n; i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
        else
        {
            vector<int> ans(n, n);
            ans[n - 1] = n - 1;

            for(int i = 0; i < n; i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}