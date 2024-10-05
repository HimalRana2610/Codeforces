#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int sum = 0, max_books = 0, ptr = 0;
    for(int i = 0; i < n; i++)
    {
        sum += a[i];
        if(sum <= t)
        {
            max_books++;
        }
        else
        {
            sum -= a[ptr];
            ptr++;
        }
    }
    cout << max_books;
    return 0;
}