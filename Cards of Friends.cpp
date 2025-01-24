#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int w, h, n;
        cin >> w >> h >> n;

        int wc = 0;
        while(w % 2 == 0)
        {
            w /= 2;
            wc++;
        }

        int hc = 0;
        while(h % 2 == 0)
        {
            h /= 2;
            hc++;
        }

        long long c = (1 << wc) * (1 << hc);
        if(n <= c)
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