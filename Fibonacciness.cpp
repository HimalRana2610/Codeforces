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
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;

        set<int> s;
        s.insert(a1 + a2);
        s.insert(a4 - a2);
        s.insert(a5 - a4);

        cout << 4 - s.size() << "\n";
    }

    return 0;
}