#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> programmers;
    vector<int> mathematicians;
    vector<int> athletes;

    for(int i = 0; i < n; i++)
    {
        int t;
        cin >> t;

        if(t == 1)
        {
            programmers.push_back(i + 1);
        }
        else if(t == 2)
        {
            mathematicians.push_back(i + 1);
        }
        else
        {
            athletes.push_back(i + 1);
        }
    }

    unsigned int arr[] = {programmers.size(), mathematicians.size(), athletes.size()};
    int teams = *min_element(arr, arr + 3);

    cout << teams << endl;

    for(int i = 0; i < teams; i++)
    {
        cout << programmers[i] << " " << mathematicians[i] << " " << athletes[i] << endl;
    }

    return 0;
}