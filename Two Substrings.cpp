#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    if(((str.find("AB") != string::npos) && (str.find("BA", str.find("AB") + 2) != string::npos)) || ((str.find("BA") != string::npos) && (str.find("AB", str.find("BA") + 2) != string::npos)))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}