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

        int zero = 0;
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] == '0')
            {
                zero++;
            }
        }

        if(min(zero, (int)str.length() - zero) % 2 == 0)
        {
            cout << "NET" << endl;
        }
        else
        {
            cout << "DA" << endl;
        }
    }

    return 0;
}