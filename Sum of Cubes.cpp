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
        long long x;
        cin >> x;

        long long l = 1, r = 10000;
        bool found = false;

        while(l <= r)
        {
            if(l * l * l + r * r * r == x)
            {
                found = true;
                break;
            }
            else if(l * l * l + r * r * r < x)
            {
                l++;
            }
            else
            {
                r--;
            }
        }

        if(found)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}