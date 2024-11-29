#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x, y, k;
        cin >> x >> y >> k;

        int ax = 0, ay = 0, bx = k, by = 0, cx = 0, cy = 0, dx = 0, dy = k;
        if(k > x || k > y)
        {
            int t = min(x, y);
            bx = t;
            by = t;
            cx = t;
            cy = 0;
            dx = 0;
            dy = t;
        }

        cout << ax << " " << ay << " " << bx << " " << by << endl << cx << " " << cy << " " << dx << " " << dy << endl;
    }

    return 0;
}