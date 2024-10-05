#include<iostream>
#include<set>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    set<char> s;
    for(int i = 1; i < str.length() - 1; i++)
    {
        if(str[i] != ',' && str[i] != ' ')
        {
            s.insert(str[i]);
        }
    }

    cout << s.size();
    return 0;
}