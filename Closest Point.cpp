#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        int x[n];
        for(int j = 0; j < n; j++)
        {
            cin >> x[j];
        }

        if(n > 2)
        {
            cout << "NO" << endl;
        }
        else if((x[1] - x[0]) < 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}