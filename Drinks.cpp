#include<iostream>
using namespace std;

int main()
{
    int n;
    float total = 0;
    cin >> n;

    int p[n];
    for(int i = 0; i < n; i++)
    {
        cin >> p[i];
        total += p[i];
    }

    cout << total / n;
    return 0;
}