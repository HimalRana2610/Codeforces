#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> arr(m + 1);
    for(int i = 0; i <= m; i++)
    {
        cin >> arr[i];
    }

    int ans = 0;
    for(int i = 0; i < m; i++)
    {
        int t = arr[i] ^ arr[m];
        if(__builtin_popcount(t) <= k)
        {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}