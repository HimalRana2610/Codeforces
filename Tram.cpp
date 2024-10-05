#include<iostream>
using namespace std;

int main()
{
    int n, max = 0, passengers = 0;
    cin >> n;

    int exit[n], enter[n];
    for(int i = 0; i < n; i++)
    {
        cin >> exit[i] >> enter[i];
        passengers = passengers - exit[i] + enter[i];

        if(passengers > max)
        {
            max = passengers;
        }
    }

    cout << max;
    return 0;
}