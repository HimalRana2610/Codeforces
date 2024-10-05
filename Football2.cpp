#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, int> freq;
    while(n--)
    {
        string str;
        cin >> str;

        freq[str]++;
    }

    int goal = 0;
    string team;
    for(auto it : freq)
    {
        if(it.second > goal)
        {
            goal = it.second;
            team = it.first;
        }
    }

    cout << team;
    return 0;
}