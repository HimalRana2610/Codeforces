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

        vector<int> arr(n);
        unordered_map<int, int> freq;

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
        }

        if(freq.size() == 1)
        {
            cout << "YES\n";
        }
        else if(freq.size() > 2)
        {
            cout << "NO\n";
        }
        else
        {
            vector<int> temp;
            for(auto &f : freq)
            {
                temp.push_back(f.second);
            }

            if(abs(temp[0] - temp[1]) <= 1)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }

    return 0;
}