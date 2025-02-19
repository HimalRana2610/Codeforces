#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        string str;
        cin >> str;

        unordered_map<char, int> freq;
        for(int i = 0; i < n; i++)
        {
            freq[str[i]]++;
        }

        int odd = 0;
        for(auto &f : freq)
        {
            if(f.second % 2 != 0)
            {
                odd++;
            }
        }

        if(k < odd - 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}