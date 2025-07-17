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
        int l1, b1, l2, b2, l3, b3;
        cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;

        if (b1 == b2 && b2 == b3 && l1 + l2 + l3 == b1)
        {
            cout << "YES\n";
            continue;
        }
        if (l1 == l2 && l2 == l3 && b1 + b2 + b3 == l1)
        {
            cout << "YES\n";
            continue;
        }

        if (l2 > l1)
        {
            swap(l1, l2);
            swap(b1, b2);
        }
        if (l3 > l1)
        {
            swap(l1, l3);
            swap(b1, b3);
        }

        if (b1 > l1 && b2 + b3 == b1 && l1 + l2 == b1 && l1 + l3 == b1)
        {
            cout << "YES\n";
            continue;
        }

        if (b2 > b1)
        {
            swap(l1, l2);
            swap(b1, b2);
        }
        if (b3 > b1)
        {
            swap(l1, l3);
            swap(b1, b3);
        }

        if (l1 > b1 && l2 + l3 == l1 && b1 + b2 == l1 && b1 + b3 == l1)
        {
            cout << "YES\n";
            continue;
        }

        cout << "NO\n";
    }

    return 0;
}