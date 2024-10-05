#include<iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int count = 1, flag = 0;
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == str[i + 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }
        if(count == 7)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }

    return 0;
}