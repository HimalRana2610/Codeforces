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

        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int ans = a[0], temp = 1;
        for(int i = 0; i < temp; i++)
        {
            ans = max(ans, a[i]);
            temp = b[i];
        }
        cout << ans << endl;
    }

    return 0;
}