#include<bits/stdc++.h>
using namespace std;

int main()
{
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

        bool flag = true;
        for(int i = 1; i <= n; i++)
        {
            if(freq[i] == 1)
            {
                flag = false;
                break;
            }
            else if(freq[i] == 0)
            {
                continue;
            }
            else
            {
                freq[i + 1] += freq[i] - 2;
                freq[i] = 2;
            }
        }

        if(flag)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}