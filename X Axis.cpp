#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        vector<int> x(3);
        cin >> x[0] >> x[1] >> x[2];

        sort(x.begin(), x.end());
        cout << x[2] - x[0] << endl;
    }

    return 0;
}