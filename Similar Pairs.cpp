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

        vector<int> arr(n);
        unordered_set<int> even, odd;
        int evenCount = 0, oddCount = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
            {
                evenCount++;
                even.insert(arr[i]);
            }
            else
            {
                oddCount++;
                odd.insert(arr[i]);
            }
        }

        if (evenCount % 2 == 0)
        {
            cout << "YES\n";
        }
        else
        {
            bool found = false;
            if (even.size() <= odd.size())
            {
                for (int x : even)
                {
                    if (odd.find(x + 1) != odd.end() || odd.find(x - 1) != odd.end())
                    {
                        found = true;
                        break;
                    }
                }
            }
            else
            {
                for (int x : odd)
                {
                    if (even.find(x + 1) != even.end() || even.find(x - 1) != even.end())
                    {
                        found = true;
                        break;
                    }
                }
            }

            if (found)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }

    return 0;
}