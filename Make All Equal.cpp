#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
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

        if(n == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            unordered_map<int, int> freq;
            for(int num : arr)
            {
                freq[num]++;
            }

            int max_freq = 0;
            for(const auto &pair : freq)
            {
                max_freq = max(max_freq, pair.second);
            }

            cout << n - max_freq << endl;
        }
    }

    return 0;
}