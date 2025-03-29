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
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<int> temp = {0, 1, 0, 3, 2, 0, 2, 5};
        int ans = 0;

        for(int i = 0; i < n; i++)
        {
            auto it = find(temp.begin(), temp.end(), arr[i]);
            if(it != temp.end())
            {
                temp.erase(it);
            }
            if(temp.size() == 0)
            {
                ans = i + 1;
                break;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}