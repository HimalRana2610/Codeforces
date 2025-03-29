#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        unordered_set<int> s;
        unordered_map<int, int> freq;

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            s.insert(x);
            freq[x]++;
        }

        int duplicate = 0;
        for(auto &f : freq)
        {
            if(f.second > 1)
            {
                duplicate += f.second - 1;
            }
        }

        if(duplicate % 2 == 0)
        {
            cout << s.size() << "\n";
        }
        else
        {
            cout << s.size() - 1 << "\n";
        }
    }

    return 0;
}