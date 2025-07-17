#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> arr(7);
    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }

    bool found = false;
    while (!found)
    {
        if (n <= 0)
        {
            cout << 7 << "\n";
            break;
        }
        for (int i = 0; i < 7; i++)
        {
            if (n <= 0)
            {
                found = true;
                cout << i << "\n";
                break;
            }
            n -= arr[i];
        }
    }

    return 0;
}