#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string str = to_string(n);
    bool flag = true;
    if(str[0] != '1')
    {
        flag = false;
    }
    else
    {
        int count = 0;
        for(int i = 1; i < str.length(); i++)
        {
            if(str[i] != '1' && str[i] != '4')
            {
                flag = false;
                break;
            }
            if(count == 3)
            {
                flag = false;
                break;
            }
            if(str[i] == '4')
            {
                count++;
            }
            else
            {
                count = 0;
            }
        }
        if(count == 3)
        {
            flag = false;
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

    return 0;
}