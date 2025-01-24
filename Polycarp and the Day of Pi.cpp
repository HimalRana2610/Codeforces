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

        string temp = "314159265358979323846264338327";
        int i = 0;
        while(i < str.length())
        {
            if(str[i] != temp[i])
            {
                break;
            }
            i++;
        }

        cout << i << endl;
    }

    return 0;
}