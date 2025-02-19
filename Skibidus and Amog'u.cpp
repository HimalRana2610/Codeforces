#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string str;
        cin >> str;

        string ans(str.begin(), str.end() - 2);
        cout << ans + 'i' << endl;
    }

    return 0;
}