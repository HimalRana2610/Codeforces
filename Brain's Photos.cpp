#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    bool flag = true;
    vector<vector<char>> arr(n, vector<char>(m));
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> arr[i][j];

            if(arr[i][j] != 'W' && arr[i][j] != 'G' && arr[i][j] != 'B')
            {
                flag = false;
            }
        }
    }

    if(flag)
    {
        cout << "#Black&White";
    }
    else
    {
        cout << "#Color";
    }
}