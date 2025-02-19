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
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        unordered_map<int, int> freq;
        vector<int> pairs;
        for(int i = 0; i < n; i++)
        {
            freq[arr[i]]++;
            if(freq[arr[i]] == 2)
            {
                pairs.push_back(arr[i]);
            }
        }

        if(pairs.size() == 0)
        {
            cout << -1 << endl;
        }
        else if(pairs.size() > 1)
        {
            cout << pairs[0] << " " << pairs[0] << " " << pairs[1] << " " << pairs[1] << endl;
        }
        else
        {
            vector<int> temp;
            int cnt = 2;
            for(int i = 0; i < n; i++)
            {
                if(arr[i] == pairs[0] && cnt > 0)
                {
                    cnt--;
                    continue;
                }
                temp.push_back(arr[i]);
            }

            bool found = false;
            for(int i = 0; i < temp.size() - 1; i++)
            {
                if(temp[i + 1] < temp[i] + 2 * pairs[0])
                {
                    cout << pairs[0] << " " << temp[i] << " " << temp[i + 1] << " " << pairs[0] << endl;
                    found = true;
                    break;
                }
            }

            if(!found)
            {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}