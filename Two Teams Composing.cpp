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
        int n, m = INT_MIN;
        cin >> n;

        unordered_set<int> s;
        unordered_map<int, int> freq;

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            s.insert(x);
            freq[x]++;
            m = max(m, freq[x]);
        }

        if(s.size() > m)
        {
            cout << m << "\n";
        }
        else if(s.size() == m)
        {
            cout << m - 1 << "\n";
        }
        else
        {
            cout << s.size() << "\n";
        }
    }

    return 0;
}