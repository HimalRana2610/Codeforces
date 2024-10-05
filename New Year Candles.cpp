#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int ans = 0, r = 0, temp = 0;
    while(a > 0)
    {
        ans += a;
        r = a + temp;
        a = r / b;
        temp = r % b;
    }

    cout << ans;
    return 0;
}