#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x;
        cin >> x;

        string str = to_string(x);
        while(str.find("33") != string::npos)
        {
            str.erase(str.find("33"), 2);
        }

        if(str.empty())
        {
            cout << "YES" << endl;
            continue;
        }

        x = stoi(str);
        if(x % 33 == 0)
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