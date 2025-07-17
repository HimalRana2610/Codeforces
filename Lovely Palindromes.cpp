#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;

    string rev = str;
    reverse(rev.begin(), rev.end());

    string ans = str + rev;
    cout << ans << "\n";

    return 0;
}