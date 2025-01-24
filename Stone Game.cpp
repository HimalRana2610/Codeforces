#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int first, second;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if(x == 1)
            {
                first = i;
            }
            else if(x == n)
            {
                second = i;
            }
        }

        if(first > second)
        {
            swap(first, second);
        }

        cout << min(first + 1 + n - second, min(second + 1, n - first)) << endl;
    }

    return 0;
}