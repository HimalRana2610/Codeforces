#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if(a > b)
        {
            swap(a, b);
        }

        int diff = ((b - a) / 2) + ((b - a) % 2 != 0);
        cout << (diff / c) + (diff % c != 0) << endl;
    }

    return 0;
}