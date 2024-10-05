#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, m, q;
        cin >> n >> m >> q;

        vector<int> teachers(m);
        for(int i = 0; i < m; i++)
        {
            cin >> teachers[i];
        }

        vector<int> queries(q);
        for(int i = 0; i < q; i++)
        {
            cin >> queries[i];
        }

        sort(teachers.begin(), teachers.end());

        for(int i = 0; i < q; i++)
        {
            int d = queries[i], ans;
            auto lb = lower_bound(teachers.begin(), teachers.end(), d);

            if(lb != teachers.end())
            {
                ans = abs(*lb - d);
            }

            if(lb != teachers.begin())
            {
                int distance = abs(*(lb - 1) - d);

                if(lb == teachers.end())
                {
                    ans = distance;
                }
                else
                {
                    ans = min(ans, distance);
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}