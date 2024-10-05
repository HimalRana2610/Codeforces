#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> arr;
        for(int i = 0; i < n; i++)
        {
            string str;
            cin >> str;
            for(int j = 0; j < 4; j++)
            {
                if(str[j] == '#')
                {
                    arr.push_back(j + 1);
                }
            }
        }

        for(int i = 0; i < n; i++)
        {
            cout << arr[n - i - 1] << " ";
        }
        cout << endl;
    }

    return 0;
}