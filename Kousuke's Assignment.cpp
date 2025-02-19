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

        map<long long, int> prefix_map;
        long long prefix_sum = 0;
        int segments = 0, last_index = -1;

        prefix_map[0] = -1;
        for(int i = 0; i < n; i++)
        {
            prefix_sum += arr[i];
            if(prefix_map.find(prefix_sum) != prefix_map.end())
            {
                if(prefix_map[prefix_sum] >= last_index)
                {
                    segments++;
                    last_index = i;
                }
            }
            prefix_map[prefix_sum] = i;
        }

        cout << segments << endl;
    }

    return 0;
}