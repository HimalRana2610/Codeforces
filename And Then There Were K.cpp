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

        int x = log2(n);
        cout << (1 << x) - 1 << endl;
    }

    return 0;
}