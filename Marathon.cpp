#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a, count = 0, arr[3];
        cin >> a;

        for(int i = 0; i < 3; i++)
        {
            cin >> arr[i];
            if(a < arr[i])
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}