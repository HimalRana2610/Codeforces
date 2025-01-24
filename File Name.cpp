#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    int cnt = 0, ans = 0;
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == 'x')
        {
            cnt++;
        }
        else
        {
            if(cnt > 2)
            {
                ans += cnt - 2;
            }
            cnt = 0;
        }
    }
    if(cnt > 2)
    {
        ans += cnt - 2;
    }

    cout << ans << endl;
    return 0;
}