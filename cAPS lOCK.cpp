#include<iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int flag = 0;
    for(int i = 1; i < str.length(); i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] += 32;
            }
            else
            {
                str[i] -= 32;
            }
        }
    }

    cout << str;
    return 0;
}