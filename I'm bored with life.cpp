#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    int x = min(a, b), ans = 1;
    while(x > 0)
    {
        ans *= (x--);
    }

    cout << ans << "\n";
    return 0;
}