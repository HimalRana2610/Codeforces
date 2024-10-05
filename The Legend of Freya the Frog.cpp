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

        int ans_x = (x / k) + (x % k != 0);
        int ans_y = (y / k) + (y % k != 0);
        
        if(ans_x > ans_y)
        {
            cout << ans_x * 2 - 1 << endl;
        }
        else
        {
            cout << ans_y * 2 << endl;
        }
    }

    return 0;
}