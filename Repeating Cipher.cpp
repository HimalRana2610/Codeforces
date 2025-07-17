#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string str;
    cin >> str;

    for (int i = 0, j = 1; i < n; i += j, j++)
    {
        cout << str[i];
    }
    cout << "\n";

    return 0;
}