#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a, b, c, n;
        cin >> a >> b >> c >> n;

        n -= 3 * max({a, b, c}) - (a + b + c);

        if(n >= 0 && n % 3 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}