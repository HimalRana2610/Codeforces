#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        vector<long long> arr(n);
        long long sum = 0;

        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        long long target = sum / n, prev = 0;
        bool flag = true;

        for (long long i = 0; i < n; i++)
        {
            if (arr[i] < target)
            {
                if (target - arr[i] > prev)
                {
                    flag = false;
                    break;
                }
                prev -= (target - arr[i]);
            }
            else
            {
                prev += (arr[i] - target);
            }
        }

        if (flag)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}