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
        int n, s;
        cin >> n >> s;

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int dx, dy, x, y;
            cin >> dx >> dy >> x >> y;

            int diff = (dx * x - dy * y) % s;
            if (diff < 0)
            {
                diff += s;
            }
            if (diff == 0)
            {
                ans++;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}