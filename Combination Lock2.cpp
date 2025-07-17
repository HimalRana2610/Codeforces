#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string str1, str2;
    cin >> str1 >> str2;

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += min(abs(str1[i] - str2[i]), 10 - abs(str1[i] - str2[i]));
    }

    cout << ans << "\n";
    return 0;
}