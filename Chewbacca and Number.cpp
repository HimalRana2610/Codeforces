#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x;
    cin >> x;

    string str = to_string(x);
    for(int i = 0; i < str.length(); i++)
    {
        int digit = str[i] - '0';
        int ans = min(digit, 9 - digit);

        if(i == 0 && digit == 9)
        {
            str[i] = '9';
        }
        else
        {
            str[i] = '0' + ans;
        }
    }

    cout << stoll(str);
    return 0;
}