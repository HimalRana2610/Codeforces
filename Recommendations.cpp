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

        vector<int> l(n), r(n);
        for(int i = 0; i < n; i++)
        {
            cin >> l[i] >> r[i];
        }

        vector<int> L(n, -1), R(n, -1), p(n);
        iota(p.begin(), p.end(), 0);

        sort(p.begin(), p.end(), [&](int i, int j)
        {
            if(l[i] != l[j])
            {
                return l[i] < l[j];
            }
            return r[i] > r[j];
        });

        set<int> sl;
        for(int i = 0; i < n; i++)
        {
            auto it = sl.lower_bound(r[p[i]]);
            if(it != sl.end())
            {
                R[p[i]] = *it;
            }

            sl.insert(r[p[i]]);
            if(i + 1 < n && l[p[i]] == l[p[i + 1]] && r[p[i]] == r[p[i + 1]])
            {
                R[p[i]] = r[p[i]];
            }
        }

        sort(p.begin(), p.end(), [&](int i, int j)
        {
            if(r[i] != r[j])
            {
                return r[i] > r[j];
            }
            return l[i] < l[j];
        });

        set<int> sr;
        for(int i = 0; i < n; i++)
        {
            auto it = sr.upper_bound(l[p[i]]);
            if(it != sr.begin())
            {
                L[p[i]] = *prev(it);
            }

            sr.insert(l[p[i]]);
            if(i + 1 < n && l[p[i]] == l[p[i + 1]] && r[p[i]] == r[p[i + 1]])
            {
                L[p[i]] = l[p[i]];
            }
        }

        for(int i = 0; i < n; i++)
        {
            if(L[i] == -1)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << (R[i] - L[i]) - (r[i] - l[i]) << endl;
            }
        }
    }

    return 0;
}