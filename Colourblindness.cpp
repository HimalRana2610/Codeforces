#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        string str1, str2;
        cin >> str1 >> str2;

        bool flag = true;
        for(int i = 0; i < n; i++)
        {
            if((str1[i] == 'R' && str2[i] != 'R') || (str1[i] != 'R' && str2[i] == 'R'))
            {
                flag = false;
                break;
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