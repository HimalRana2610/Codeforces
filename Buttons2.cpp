#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (n - i - 1) * (i + 1) + 1;
    }

    cout << ans << "\n";
    return 0;
}