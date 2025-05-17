#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int a = 2, b = 3, c = 1;
        n -= 6;

        if(n % 3 == 0)
        {
            a += n / 3;
            b += n / 3;
            c += n / 3;
        }
        else if(n % 3 == 1)
        {
            a += n / 3;
            b += n / 3 + 1;
            c += n / 3;
        }
        else
        {
            a += n / 3 + 1;
            b += n / 3 + 1;
            c += n / 3;
        }

        cout << a << " " << b << " " << c << "\n";
    }

    return 0;
}