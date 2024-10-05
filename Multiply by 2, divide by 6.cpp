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

        int count = 0;
        for(count = 0; ; count++)
        {
            if(n % 6 == 0)
            {
                n /= 6;
            }
            else if(n % 3 == 0)
            {
                n *= 2;
            }
            else
            {
                break;
            }
        }

        if(n == 1)
        {
            cout << count << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}