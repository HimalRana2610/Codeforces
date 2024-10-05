#include<iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;

    int p[n], q[n];
    for(int i = 0; i < n; i++)
    {
        cin >> p[i] >> q[i];
        if((q[i] - p[i]) >= 2)
        {
            count++;
        }
    }

    cout << count;
    return 0;
}