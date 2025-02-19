#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        unordered_set<int> unique;

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            unique.insert(a[i]);
        }
        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
            unique.insert(b[i]);
        }

        unordered_map<int, int> freqa, freqb;
        freqa[a[0]] = 1;
        freqb[b[0]] = 1;

        int cnta = 1, cntb = 1;
        for(int i = 1; i < n; i++)
        {
            if(a[i - 1] == a[i])
            {
                cnta++;
            }
            else
            {
                cnta = 1;
            }

            if(b[i - 1] == b[i])
            {
                cntb++;
            }
            else
            {
                cntb = 1;
            }

            freqa[a[i]] = max(freqa[a[i]], cnta);
            freqb[b[i]] = max(freqb[b[i]], cntb);
        }

        int ans = 0;
        for(auto x : unique)
        {
            ans = max(ans, freqa[x] + freqb[x]);
        }

        cout << ans << endl;
    }

    return 0;
}