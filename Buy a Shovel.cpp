#include<iostream>
using namespace std;

int main()
{
    int k, r, count = 1;
    cin >> k >> r;

    for(int i = 1; ((k * i) % 10 != r) && ((k * i) % 10 != 0); i++)
    {
        count++;
    }

    cout << count;
    return 0;
}