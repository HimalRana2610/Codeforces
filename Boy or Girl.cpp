#include<iostream>
#include<string.h>
#include<set>
using namespace std;

int main()
{
    char str[101];
    cin >> str;

    set<char> distinct;

    for(int i = 0; i < strlen(str); i++)
    {
        distinct.insert(str[i]);
    }

    if(distinct.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }

    return 0;
}