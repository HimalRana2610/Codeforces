#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> sorted = arr;
    sort(sorted.begin(), sorted.end());

    int first = 1, second = 1;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] != sorted[i])
        {
            first = i;
            break;
        }
    }
    for(int i = n - 1; i >= 0; i--)
    {
        if(arr[i] != sorted[i])
        {
            second = i;
            break;
        }
    }

    if(first == second)
    {
        cout << "yes" << endl;
        cout << first << " " << second << endl;
        return 0;
    }

    vector<int> temp(arr.begin() + first, arr.begin() + second + 1);
    reverse(temp.begin(), temp.end());

    vector<int> reversed(sorted.begin() + first, sorted.begin() + second + 1);

    for(int i = 0; i < temp.size(); i++)
    {
        if(temp[i] != reversed[i])
        {
            cout << "no";
            return 0;
        }
    }

    cout << "yes" << endl;
    cout << first + 1 << " " << second + 1 << endl;

    return 0;
}