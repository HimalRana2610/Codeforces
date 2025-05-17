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
        int n, m, a, b;
        cin >> n >> m >> a >> b;

        int starta = 1 + ceil(log2(m)) + ceil(log2(min(a, n - a + 1)));
        int startb = 1 + ceil(log2(n)) + ceil(log2(min(b, m - b + 1)));

        cout << min(starta, startb) << "\n";
    }

    return 0;
}