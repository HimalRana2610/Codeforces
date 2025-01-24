#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    stack<char> stk;
    for(int i = 0; i < n; i++)
    {
        if(!stk.empty() && ((stk.top() == '0' && str[i] == '1') || (stk.top() == '1' && str[i] == '0')))
        {
            stk.pop();
        }
        else
        {
            stk.push(str[i]);
        }
    }

    cout << stk.size();
    return 0;
}