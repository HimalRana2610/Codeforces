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

        vector<int> arr(n, -1);
        int m = 1;

        for(int i = k - 1; i < n; i += k)
        {
            arr[i] = m++;
        }
        for(int i = 0; i < n; i++)
        {
            if(arr[i] == -1)
            {
                cout << m++ << " ";
            }
            else
            {
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}