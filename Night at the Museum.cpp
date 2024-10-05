#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    char temp = 'a';
    int ans = 0;
    for(int i = 0; i < str.length(); i++)
    {
        ans += min(abs(str[i] - temp), 26 - abs(temp - str[i]));
        temp = str[i];
    }

    cout << ans;
    return 0;
}