#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        int a = min(x, y), b = min(x, z), c = min(y, z);
        if(max(a, b) == x && max(a, c) == y && max(b, c) == z)
        {
            cout << "YES" << endl;
            cout << a << " " << b << " " << c << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}