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
        int n, k;
        cin >> n >> k;

        string str;
        cin >> str;

        unordered_set<char> s;
        for(int i = 0; i < n; i++)
        {
            s.insert(str[i]);
        }

        if(s.size() == 1)
        {
            cout << "NO\n";
            continue;
        }

        if(k > 0)
        {
            cout << "YES\n";
        }
        else
        {
            string rev = str;
            reverse(rev.begin(), rev.end());

            if(str >= rev)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
    }

    return 0;
}