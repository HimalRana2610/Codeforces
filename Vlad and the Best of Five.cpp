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

        int a = 0, b = 0;
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] == 'A')
            {
                a++;
            }
            else
            {
                b++;
            }
        }

        if(a > b)
        {
            cout << "A" << endl;
        }
        else
        {
            cout << "B" << endl;
        }
    }

    return 0;
}