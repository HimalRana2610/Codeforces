#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long n, k;
        cin >> n >> k;

        long long l = 1, r = n, lucky = 0;
        for(int i = 0; i < 64; i++)
        {
            if((r - l + 1) < k || (1LL << i) > n)
            {
                break;
            }

            long long mid = (l + r) / 2;
            if((r - l + 1) & 1)
            {
                lucky += (1LL << i);
                r = mid - 1;
            }
            else
            {
                r = mid;
            }
        }
        cout << (1LL * (n + 1) * lucky) / 2 << endl;
    }

    return 0;
}