#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        string str;
        cin >> str;

        if(str[0] == '1' && str[1] == '0')
        {
            if(str[2] >= '2')
            {
                cout << "YES" << endl;
            }
            else if(str[2] == '1' && str[3] != '\0')
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}