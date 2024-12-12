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

        if(n <= 2)
        {
            cout << n << endl;
            continue;
        }

        int ans = 2, i = 4, c = 5;
        while(i < n)
        {
            i = 2 * c;
            c = i + 1;
            ans++;
        }

        cout << ans << endl;
    }

    return 0;
}