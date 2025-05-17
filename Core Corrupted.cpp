#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    vector<bool> is_corrupted(10000101, false);
    for(int i = 1; i <= 10000100; i++)
    {
        int temp = i;
        bool seven = false;

        while(temp > 0)
        {
            if(temp % 10 == 7)
            {
                seven = true;
                break;
            }
            temp /= 10;
        }

        if(seven)
        {
            for(int j = i; j <= 10000100; j += i)
            {
                is_corrupted[j] = true;
            }
        }
    }

    vector<int> next_stable(10000101, -1);
    int next = -1;

    for(int i = 10000100; i >= 1; i--)
    {
        if(!is_corrupted[i])
        {
            next_stable[i] = next;
            next = i;
        }
        else
        {
            next_stable[i] = next;
        }
    }

    while(t--)
    {
        int x;
        cin >> x;

        if(is_corrupted[x])
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << next_stable[x] << "\n";
        }
    }

    return 0;
}