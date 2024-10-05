#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[101];
    cin >> str;

    int upper = 0, lower = 0;
    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            upper++;
        }
        else
        {
            lower++;
        }
    }

    if(upper > lower)
    {
        for(int i = 0; i < strlen(str); i++)
        {
            if(str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] -= 32;
            }
        }
    }
    else
    {
        for(int i = 0; i < strlen(str); i++)
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] += 32;
            }
        }
    }

    cout << str;
    return 0;
}