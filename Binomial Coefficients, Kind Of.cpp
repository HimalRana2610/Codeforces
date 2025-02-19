#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;

    vector<long long> n(t), k(t);
    for(long long i = 0; i < t; i++)
    {
        cin >> n[i];
    }

    for(long long i = 0; i < t; i++)
    {
        cin >> k[i];
        
        long long ans = 1, base = 2;
        while(k[i] > 0)
        {
            if(k[i] % 2 != 0)
            {
                ans = (1LL * ans * base) % (1000000007);
            }

            base = (1LL * base * base) % (1000000007);
            k[i] /= 2;
        }
        
        cout << ans << endl;
    }
    return 0;
}