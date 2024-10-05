#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;

    string str = str1 + str2;

    sort(str.begin(), str.end());
    sort(str3.begin(), str3.end());

    if(str == str3)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}