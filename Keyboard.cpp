#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    string str;
    cin >> str;

    string temp = "qwertyuiopasdfghjkl;zxcvbnm,./";
    if(ch == 'R')
    {
        for(int i = 0; i < str.length(); i++)
        {
            for(int j = 1; j < temp.length(); j++)
            {
                if(str[i] == temp[j])
                {
                    str[i] = temp[j - 1];
                    break;
                }
            }
        }
    }
    else
    {
        for(int i = 0; i < str.length(); i++)
        {
            for(int j = 0; j < temp.length() - 1; j++)
            {
                if(str[i] == temp[j])
                {
                    str[i] = temp[j + 1];
                    break;
                }
            }
        }
    }

    cout << str;
    return 0;
}