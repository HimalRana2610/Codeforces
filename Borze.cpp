#include<iostream>
using namespace std;

int main()
{
    string str, ans = "";
    cin >> str;

    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == '-' && str[i + 1] == '.')
        {
            ans += '1';
            i++;
        }
        else if(str[i] == '-' && str[i + 1] == '-')
        {
            ans += '2';
            i++;
        }
        else
        {
            ans += '0';
        }
    }

    cout << ans;
    return 0;
}