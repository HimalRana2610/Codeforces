#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n), b(n), m(n);
    vector<long long> prefix(n + 1);
    prefix[0] = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> b[i];
        m[i] = a[i] / b[i];
        prefix[i + 1] = prefix[i] + m[i];
    }

    vector<int> ans(n, 0);
    if(k <= prefix[n])
    {
        for(int i = 0; i < n; i++)
        {
            ans[i] = k - (prefix[n] - prefix[i + 1]);
            k -= ans[i];
        }
    }

    if(ans[0] < 0)
    {
        int temp = ans[0];
        ans[0] = 0;
        for(int i = 1; i < n; i++)
        {
            ans[i] += temp;
            if(ans[i] < 0)
            {
                temp = ans[i];
                ans[i] = 0;
            }
            else
            {
                break;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}