#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_map<string, int> name_count;

    while (n--)
    {
        string name;
        cin >> name;

        if (name_count.find(name) == name_count.end())
        {
            name_count[name] = 1;
            cout << "OK" << endl;
        }
        else
        {
            int k = name_count[name];
            string new_name;
            while (true)
            {
                new_name = name + to_string(k);
                if (name_count.find(new_name) == name_count.end())
                {
                    break;
                }
                ++k;
            }
            name_count[new_name] = 1;
            name_count[name] = k + 1;
            cout << new_name << endl;
        }
    }

    return 0;
}