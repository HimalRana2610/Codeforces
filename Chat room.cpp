#include<iostream>
using namespace std;

int main()
{
    string s, ans = "hello";
    cin >> s;

    int i = 0, flag = 0;
    for(int j = 0; j < s.length(); j++)
    {
        if(s[j] == ans[i])
        {
            i++;
        }
        if(i == ans.length())
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }

    return 0;
}