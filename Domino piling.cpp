#include<iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    int ans = (n / 2) * m;

    if(n % 2 != 0)
    {
        ans += m / 2;
    }

    cout << ans;
    return 0;
}