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

        vector<vector<int>> arr(n, vector<int>(n));
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }

        int ans = 0;
        for(int i = n - 1; i >= 0; i--)
        {
            for(int j = n - 1; j >= 0; j--)
            {
                if(arr[i][j] < 0)
                {
                    int temp = abs(arr[i][j]);
                    ans += temp;

                    for(int k = 0; i - k >= 0 && j - k >= 0; k++)
                    {
                        arr[i - k][j - k] += temp;
                    }
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}