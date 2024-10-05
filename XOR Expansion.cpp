#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long n;
        cin >> n;

        long long ans = (1LL << (static_cast<int>(log2(n)) + 1)) - 1;
        cout << ans << endl;
    }

    return 0;
}