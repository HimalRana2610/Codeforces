#include<iostream>
#include<set>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    for(int i = 0; i < n; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }

    set<char> s;
    for(int i = 0; i < n; i++)
    {
        s.insert(str[i]);
    }

    if(s.size() == 26)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}