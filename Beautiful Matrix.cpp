#include<iostream>
using namespace std;

int main()
{
    int arr[5][5], x, y, temp, count = 0;

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if(arr[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }

    while(x != 2)
    {
        if(x < 2)
        {
            arr[x][y] = 0;
            arr[++x][y] = 1;
        }
        else
        {
            arr[x][y] = 0;
            arr[--x][y] = 1;
        }
        count++;
    }

    while(y != 2)
    {
        if(y < 2)
        {
            arr[x][y] = 0;
            arr[x][++y] = 1;
        }
        else
        {
            arr[x][y] = 0;
            arr[x][--y] = 1;
        }
        count++;
    }

    cout << count;
    return 0;
}