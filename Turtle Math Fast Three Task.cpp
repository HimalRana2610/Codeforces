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

        int sum = 0;
        bool one = false, two = false;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];

            if (arr[i] % 3 == 1)
            {
                one = true;
            }
            else if (arr[i] % 3 == 2)
            {
                two = true;
            }
        }

        if (sum % 3 == 0)
        {
            cout << 0 << "\n";
        }
        else if (sum % 3 == 1)
        {
            if (one)
            {
                cout << 1 << "\n";
            }
            else
            {
                cout << 2 << "\n";
            }
        }
        else
        {
            cout << 1 << "\n";
        }
    }

    return 0;
}