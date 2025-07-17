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
        int n, x;
        cin >> n >> x;

        vector<int> arr(n);
        int first = -1;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1 && first == -1)
            {
                first = i;
            }
        }

        int second = -1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] == 1)
            {
                second = i;
                break;
            }
        }

        if (second - first + 1 <= x)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}