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

        string str;
        cin >> str;

        unordered_set<string> s;
        for (int i = 0; i < n - 1; i++)
        {
            s.insert(str.substr(i, 2));
        }

        cout << s.size() << "\n";
    }

    return 0;
}