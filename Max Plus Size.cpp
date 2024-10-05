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

        int m = 0, cnt = 0;
        for(int i = 0; i < n; i += 2)
        {
            m = max(m, arr[i]);
            cnt++;
        }
        int score0 = m + cnt;

        m = 0, cnt = 0;
        for(int i = 1; i < n; i += 2)
        {
            m = max(m, arr[i]);
            cnt++;
        }
        int score1 = m + cnt;

        cout << max(score0, score1) << endl;
    }

    return 0;
}