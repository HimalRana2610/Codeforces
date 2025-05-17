#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    vector<int> primes;
    vector<bool> isPrime(10000001, true);
    isPrime[0] = isPrime[1] = false;
 
    for(int i = 2; i <= 10000000; i++)
    {
        if(isPrime[i])
        {
            primes.push_back(i);
            if((long long)i * i <= 10000000)
            {
                for(int j = i * i; j <= 10000000; j += i)
                {
                    isPrime[j] = false;
                }
            }
        }
    }

    while(t--)
    {
        int l, r;
        cin >> l >> r;

        cout << lower_bound(primes.begin(), primes.end(), r) - lower_bound(primes.begin(), primes.end(), l) + (l == 1) + (isPrime[r]) << "\n";
    }

    return 0;
}