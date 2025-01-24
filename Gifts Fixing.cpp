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

        int ma = *min_element(a.begin(), a.end());
        int mb = *min_element(b.begin(), b.end());

        long long ans = 0;
        for(int i = 0; i < n; i++)
        {
            ans += max(a[i] - ma, b[i] - mb);
        }

        cout << ans << endl;
    }

    return 0;
}