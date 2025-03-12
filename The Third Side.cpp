#include<bits/stdc++.h>
using namespace std;

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

        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            pq.push(x);
        }

        while(pq.size() != 1)
        {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();

            pq.push(a + b - 1);
        }

        cout << pq.top() << endl;
    }

    return 0;
}