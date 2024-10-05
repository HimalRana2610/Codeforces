#include<iostream>
using namespace std;

int main()
{
    int n, k, total = 0, count = 0;
    cin >> n >> k;

    for(int i = 0; i < n; i++)
    {
        total += 5 * (i + 1);
        if(total <= 240 - k)
        {
            count++;
        }
        else
        {
            break;
        }
    }

    cout << count;
    return 0;
}