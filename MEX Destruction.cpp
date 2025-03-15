#include<bits/stdc++.h>
using namespace std;

int mex(vector<int> arr);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int count = 0;
        while(arr.size() && arr.back() == 0)
        {
            arr.pop_back();
        }
        while(arr.size() && arr[0] == 0)
        {
            arr.erase(arr.begin());
        }

        for(int i = 0; i < arr.size(); i++)
        {
            count += (arr[i] == 0);
        }

        if(count == arr.size())
        {
            cout << 0 << endl;
        }
        else if(mex(arr) == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }

    return 0;
}

int mex(vector<int> arr)
{
    sort(arr.begin(), arr.end());

    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] != i)
        {
            return i;
        }
    }

    return arr.size();
}