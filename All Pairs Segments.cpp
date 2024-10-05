#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long n, q;
        cin >> n >> q;

        vector<long long> x(n);
        map<long long, long long> freq;
        for(long long i = 0; i < n; i++)
        {
            cin >> x[i];
            freq[(n - 1) + i * (n - i - 1)]++;
        }
        for(int i = 1; i < n; i++)
        {
            freq[i * (n - i)] += (x[i] - x[i - 1] - 1);
        }

        vector<long long> queries(q);
        for(long long i = 0; i < q; i++)
        {
            cin >> queries[i];
            cout << freq[queries[i]] << " ";
        }
        cout << endl;
    }

    return 0;
}