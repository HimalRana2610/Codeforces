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

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (s < arr[0])
        {
            cout << arr[n - 1] - s << "\n";
        }
        else if (s > arr[n - 1])
        {
            cout << s - arr[0] << "\n";
        }
        else
        {
            cout << min(s + arr[n - 1] - 2 * arr[0], 2 * arr[n - 1] - s - arr[0]) << "\n";
        }
    }

    return 0;
}