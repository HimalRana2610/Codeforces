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

        if(n % 2 != 0 && (n < k + 2 || k % 2 == 0) && n != k)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}