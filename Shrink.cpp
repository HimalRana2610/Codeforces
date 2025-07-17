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

        cout << 1 << " ";

        for (int i = n; i > 1; i--)
        {
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}