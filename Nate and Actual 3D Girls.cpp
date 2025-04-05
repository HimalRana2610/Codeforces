#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    vector<string> arr(n), words(m);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < m; i++)
    {
        cin >> words[i];
    }

    unordered_map<char, int> freq;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < arr[i].length(); j++)
        {
            freq[arr[i][j]]++;
        }
    }

    bool flag = true;
    for(int i = 0; i < m && flag; i++)
    {
        for(int j = 0; j < words[i].length(); j++)
        {
            words[i][j] = (((words[i][j] - 'a') + k) % 26) + 'a';
            if(freq[words[i][j]] == 0)
            {
                flag = false;
                break;
            }
            freq[words[i][j]]--;
        }
    }

    if(flag)
    {
        cout << "Make her kokoro go doki-doki!\n";
    }
    else
    {
        cout << "It is gonna be daijoubu.\n";
    }

    return 0;
}