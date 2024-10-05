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

        bool flag = false;
        for(int i = 0; i < str.length() - 1; i++)
        {
            if(str[i] == 'i' && str[i + 1] == 't')
            {
                flag = true;
            }
        }

        if(flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}