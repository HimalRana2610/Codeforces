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
        int n, x;
        cin >> n >> x;

        if(n == x)
        {
            for(int i = 0; i < n; i++)
            {
                cout << i << " ";
            }
            cout << "\n";

            continue;
        }

        int k = 0;
        for(int i = 0; i < n - 1; i++, k++)
        {
            if(k == x)
            {
                k++;
            }
            cout << k << " ";
        }

        cout << x << "\n";
    }

    return 0;
}