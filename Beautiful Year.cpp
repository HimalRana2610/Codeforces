#include<iostream>
using namespace std;

int main()
{
    int y;
    cin >> y;

    for(int i = y + 1; i <= 9012; i++)
    {
        int d1 = i % 10;
        int d2 = (i / 10) % 10;
        int d3 = (i / 100) % 10;
        int d4 = (i / 1000) % 10;

        if((d1 != d2) && (d1 != d3) && (d1 != d4) && (d2 != d3) && (d2 != d4) && (d3 != d4))
        {
            cout << i;
            break;
        }
    }

    return 0;
}