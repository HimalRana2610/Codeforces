#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int ans = n / 3;
        if (n % 3 == 0)
        {
            cout << ans << "\n";
        }
        else if (n == 1)
        {
            cout << 2 << "\n";
        }
        else
        {
            cout << ans + 1 << "\n";
        }
    }

    return 0;
}