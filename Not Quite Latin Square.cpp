#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string str;

        set<char> s = {'A', 'B', 'C'};
        for(int i = 0; i < 3; i++)
        {
            cin >> str;
            if(str.find('?') != string::npos)
            {
                for(int i = 0; i < 3; i++)
                {
                    if(str[i] != '?')
                    {
                        s.erase(str[i]);
                    }
                }
                cout << *s.begin() << endl;
            }
        }
    }

    return 0;
}