#include<iostream>
#include<set>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if(arr[0] != arr[1] && arr[1] == arr[2])
        {
            cout << 1 << endl;
            continue;
        }

        set<int> s;
        for(int i = 0; i < n; i++)
        {
            s.insert(arr[i]);
            if(s.size() == 2)
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }

    return 0;
}