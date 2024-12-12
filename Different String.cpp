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

        string temp = str;
        for(int i = 0; i < str.length() - 1; i++)
        {
            temp[i] = str[i + 1];
        }
        temp[str.length() - 1] = str[0];

        if(temp == str)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << temp << endl;
        }
    }

    return 0;
}