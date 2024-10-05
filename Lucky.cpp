#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string str;
        cin >> str;

        int n = str.size();
        if(((str[0] - '0') + (str[1] - '0') + (str[2] - '0')) == ((str[n - 1] - '0') + (str[n - 2] - '0') + (str[n - 3]) - '0'))
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