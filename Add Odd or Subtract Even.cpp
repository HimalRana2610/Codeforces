#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a, b;
        cin >> a >> b;

        if(a == b)
        {
            cout << 0 << endl;
        }
        else if(((b < a) && (a % 2 == 0) && (b % 2 == 0)) || ((b > a) && (a % 2 == 0) && (b % 2 != 0)) || ((b < a) && (a % 2 != 0) && (b % 2 != 0)) || ((b > a) && (a % 2 != 0) && (b % 2 == 0)))
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }

    return 0;
}