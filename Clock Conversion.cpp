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

        string ans = str;
        ans += " AM";

        int hour = stoi(str.substr(0, 2));
        if(hour >= 22)
        {
            hour -= 12;
            ans[0] = to_string(hour)[0];
            ans[1] = to_string(hour)[1];
            ans[6] = 'P';
        }
        else if(hour > 12 && hour < 22)
        {
            hour -= 12;
            ans[0] = '0';
            ans[1] = to_string(hour)[0];
            ans[6] = 'P';
        }
        else if(hour == 0)
        {
            ans[0] = '1';
            ans[1] = '2';
        }
        else if(hour == 12)
        {
            ans[6] = 'P';
        }
        cout << ans << endl;
    }

    return 0;
}