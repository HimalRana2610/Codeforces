#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        cout << (n / 2 * min(2 * a, b)) + ((n % 2) * a) << endl;
    }

    return 0;
}