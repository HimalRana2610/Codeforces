#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int maxi = -1;
    vector<long long> a(100005, 0);
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[x]++;
        maxi = max(maxi, x);
    }

    vector<long long> b(100005, 0);
    b[0] = 0;
    b[1] = a[1];
    for(long long i = 2; i <= 100000; i++)
    {
        b[i] = max(b[i - 1], b[i - 2] + (a[i] * i));
    }

    cout << b[maxi];
    return 0;
}