#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k, sum = 0;
        cin >> n >> k;

        vector<int> a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        vector<int> b(n);
        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        for(int i = 0; i < k; i++)
        {
            if(sum - a[i] + b[n - i - 1] > sum)
            {
                sum = sum - a[i] + b[n - i - 1];
                swap(a[i], b[n - i - 1]);
            }
            else
            {
                break;
            }
        }
        
        cout << sum << endl;
    }

    return 0;
}