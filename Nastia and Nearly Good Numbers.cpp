#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long a, b;
        cin >> a >> b;

        if(b == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            if(b == 2)
            {
                long long x = a, y = 2 * a, z = 3 * a;
                cout << x << " " << y << " " << z << endl;
            }
            else
            {
                long long x = a, y = a * (b - 1), z = a * b;
                cout << x << " " << y << " " << z << endl;
            }
        }
    }

    return 0;
}