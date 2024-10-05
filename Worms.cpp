#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> sums(n);
    sums[0] = a[0];
    for(int i = 1; i < n; i++)
    {
        sums[i] = sums[i - 1] + a[i];
    }

    int m;
    cin >> m;

    vector<int> q(m);
    for(int i = 0; i < m; i++)
    {
        cin >> q[i];
        cout << lower_bound(sums.begin(), sums.end(), q[i]) - sums.begin() + 1 << endl;
    }

    return 0;
}