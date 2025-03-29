#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;

    int c1 = 0, c2 = 0, ans = 0;
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == 'Q')
        {
            c1++;
            ans += c2;
        }
        else if(str[i] == 'A')
        {
            c2 += c1;
        }
    }

    cout << ans << endl;
    return 0;
}