#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int r = n % 3;
        if(r == 0)
        {
            cout << n / 3 << " " << n / 3 << endl;
        }
        else if(r == 1)
        {
            cout << n / 3 + 1 << " " << n / 3 << endl;
        }
        else
        {
            cout << n / 3 << " " << n / 3 + 1 << endl;
        }
    }

    return 0;
}