#include<iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    char arr[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(i % 2 == 0)
            {
                arr[i][j] = '#';
            }
            else
            {
                if(i % 4 == 1)
                {
                    if(j == m - 1)
                    {
                        arr[i][j] = '#';
                    }
                    else
                    {
                        arr[i][j] = '.';
                    }
                }
                else
                {
                    if(j == 0)
                    {
                        arr[i][j] = '#';
                    }
                    else
                    {
                        arr[i][j] = '.';
                    }
                }
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}