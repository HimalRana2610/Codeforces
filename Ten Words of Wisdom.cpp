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

        int ans, m = 0;
        for(int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;

            if(a <= 10 && b > m)
            {
                m = b;
                ans = i + 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}