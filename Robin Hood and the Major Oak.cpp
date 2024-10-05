#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        if((k % 2 == 0 && (k / 2) % 2 == 0) || (k % 2 != 0 && n % 2 == 0 && (k / 2) % 2 == 0) || (k % 2 != 0 && n % 2 != 0 && ((k + 1) / 2) % 2 == 0))
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