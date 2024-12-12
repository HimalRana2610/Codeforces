#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string str;
        cin >> str;

        map<char, int> freq;
        for(int i = 0; i < str.length(); i++)
        {
            freq[str[i]]++;
        }

        if(freq['A'] + freq['C'] == freq['B'])
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