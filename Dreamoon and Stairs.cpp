#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int ans = (n % 2 == 0) ? (n / 2) : (n / 2 + 1);
    int temp = ans % m;

    if(temp != 0)
    {
        temp = m - temp;
    }

    if(m > n)
    {
        cout << -1;
    }
    else
    {
        cout << ans + temp;
    }

    return 0;
}