#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, x;
        cin >> n >> x;

        if(n <= 2)
        {
            cout << 1 << endl;
        }
        else
        {
            n -= 2;
            cout << n / x + (n % x != 0) + 1 << endl;
        }
    }

    return 0;
}