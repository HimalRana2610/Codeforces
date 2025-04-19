#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        string str;
        cin >> str;

        vector<int> left(n + 1, 0), right(n + 1, 0);
        unordered_set<char> s;

        for(int i = 0; i < n; i++)
        {
            s.insert(str[i]);
            left[i + 1] = s.size();
        }

        s.clear();
        for(int i = n - 1; i >= 0; i--)
        {
            s.insert(str[i]);
            right[i] = s.size();
        }

        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            ans = max(ans, left[i] + right[i]);
        }

        cout << ans << "\n";
    }

    return 0;
}