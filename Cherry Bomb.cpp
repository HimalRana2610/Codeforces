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

        vector<int> a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> b(n);
        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int sum = -1;
        for(int i = 0; i < n; i++)
        {
            if(b[i] != -1)
            {
                sum = a[i] + b[i];
                break;
            }
        }

        int ans = 1;
        if(sum == -1)
        {
            ans = k - *max_element(a.begin(), a.end()) + *min_element(a.begin(), a.end()) + 1;
        }
        else
        {
            for(int i = 0; i < n; i++)
            {
                if(b[i] == -1)
                {
                    if(sum - a[i] < 0 || sum - a[i] > k)
                    {
                        ans = 0;
                        break;
                    }
                }
                else if(b[i] != sum - a[i])
                {
                    ans = 0;
                    break;
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}