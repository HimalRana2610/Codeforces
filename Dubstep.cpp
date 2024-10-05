#include<iostream>
using namespace std;

int main()
{
    string str, ans = "";
    cin >> str;

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B')
        {
            if(ans.length() != 0 && ans[ans.length() - 1] != ' ')
            {
                ans += ' ';
            }
            i += 2;
        }
        else
        {
            ans += str[i];
        }
    }

    cout << ans;
    return 0;
}