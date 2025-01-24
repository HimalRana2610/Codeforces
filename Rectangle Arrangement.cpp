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

        int mw = 0, mh = 0;
        for(int i = 0; i < n; i++)
        {
            int w, h;
            cin >> w >> h;

            mw = max(mw, w);
            mh = max(mh, h);
        }

        cout << 2 * (mw + mh) << endl;
    }

    return 0;
}