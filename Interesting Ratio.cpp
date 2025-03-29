#include<bits/stdc++.h>
using namespace std;

vector<int> generate_primes(int n);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> primes = generate_primes(n);
        long long ans = 0;

        for(int i = 0; i < primes.size(); i++)
        {
            ans += n / primes[i];
        }

        cout << ans << "\n";
    }

    return 0;
}

vector<int> generate_primes(int n)
{
    vector<int> primes;
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for(int i = 2; i <= n; i++)
    {
        if(isPrime[i])
        {
            primes.push_back(i);
            if((long long)i * i <= n)
            {
                for(int j = i * i; j <= n; j += i)
                {
                    isPrime[j] = false;
                }
            }
        }
    }

    return primes;
}