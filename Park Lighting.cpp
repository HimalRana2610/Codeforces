#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, m;
        cin >> n >> m;

        cout << ((n * m) / 2) + ((n * m) % 2 != 0) << endl;
    }

    return 0;
}