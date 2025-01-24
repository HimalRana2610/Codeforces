#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, a, b, c;
        cin >> n >> a >> b >> c;

        int temp = n / (a + b + c);
        int ans = 3 * temp;
        n -= ((ans / 3) * (a + b + c));

        for(int i = 0; n > 0; i++)
        {
            if(i % 3 == 0)
            {
                n -= a;
            }
            else if(i % 3 == 1)
            {
                n -= b;
            }
            else
            {
                n -= c;
            }
            ans++;
        }

        cout << ans << endl;
    }

    return 0;
}