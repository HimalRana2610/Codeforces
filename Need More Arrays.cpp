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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        unordered_set<int> s;
        s.insert(arr[0]);

        int prev = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] > prev + 1)
            {
                prev = arr[i];
                s.insert(arr[i]);
            }
        }

        cout << s.size() << "\n";
    }

    return 0;
}