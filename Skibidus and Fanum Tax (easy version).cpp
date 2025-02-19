#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> a(n), b(m);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        a[0] = min(a[0], b[0] - a[0]);
        for(int i = 1; i < n; i++)
        {
            if((a[i] < a[i - 1] && b[0] - a[i] >= a[i - 1]) || (a[i] > b[0] - a[i] && b[0] - a[i] >= a[i - 1]))
            {
                a[i] = b[0] - a[i];
            }
        }

        bool flag = true;
        for(int i = 1; i < n; i++)
        {
            if(a[i] < a[i - 1])
            {
                flag = false;
                break;
            }
        }

        if(flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}