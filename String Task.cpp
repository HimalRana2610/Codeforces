#include<iostream>
using namespace std;

int main()
{
    string str, ans = "";
    cin >> str;

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'y')
        {
            ans += '.';
            ans += str[i];
        }
    }

    cout << ans;
    return 0;
}