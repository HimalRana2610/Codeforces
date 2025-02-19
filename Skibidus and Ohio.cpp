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

        if(str.length() == 1)
        {
            cout << 1 << endl;
            continue;
        }

        bool flag = false;
        for(int i = 1; i < str.length(); i++)
        {
            if(str[i] == str[i - 1])
            {
                flag = true;
                break;
            }
        }

        if(flag)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << str.length() << endl;
        }
    }

    return 0;
}