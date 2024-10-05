#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int l, r;
        cin >> l >> r;

        int ans = l;
        vector<int> arr;

        for(int i = 0; ans <= r; i++)
        {
            ans += i;
            arr.push_back(ans);
        }

        cout << arr.size() - 1 << endl;
    }

    return 0;
}