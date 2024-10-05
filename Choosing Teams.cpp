#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr;

    for(int i = 0; i < n; i++)
    {
        int y;
        cin >> y;

        if(y <= 5 - k)
        {
            arr.push_back(y);
        }
    }

    cout << arr.size() / 3;
    return 0;
}