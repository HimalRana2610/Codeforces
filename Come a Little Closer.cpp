#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<pair<int, int>> monsters(n);
        int min_x = INT_MAX, max_x = INT_MIN, min_y = INT_MAX, max_y = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            cin >> monsters[i].first >> monsters[i].second;
            min_x = min(min_x, monsters[i].first);
            max_x = max(max_x, monsters[i].first);
            min_y = min(min_y, monsters[i].second);
            max_y = max(max_y, monsters[i].second);
        }

        if (n == 1)
        {
            cout << 1 << "\n";
            continue;
        }

        int min_x_count = 0, max_x_count = 0, min_y_count = 0, max_y_count = 0, second_min_x = INT_MAX, second_max_x = INT_MIN, second_min_y = INT_MAX, second_max_y = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (monsters[i].first == min_x)
            {
                min_x_count++;
            }
            else
            {
                second_min_x = min(second_min_x, monsters[i].first);
            }

            if (monsters[i].first == max_x)
            {
                max_x_count++;
            }
            else
            {
                second_max_x = max(second_max_x, monsters[i].first);
            }

            if (monsters[i].second == min_y)
            {
                min_y_count++;
            }
            else
            {
                second_min_y = min(second_min_y, monsters[i].second);
            }

            if (monsters[i].second == max_y)
            {
                max_y_count++;
            }
            else
            {
                second_max_y = max(second_max_y, monsters[i].second);
            }
        }

        long long ans = (long long)(max_x - min_x + 1) * (max_y - min_y + 1);
        for (int i = 0; i < n; i++)
        {
            int min_x_eff = min_x, max_x_eff = max_x, min_y_eff = min_y, max_y_eff = max_y;
            if (monsters[i].first == min_x && min_x_count == 1)
            {
                min_x_eff = second_min_x;
            }
            if (monsters[i].first == max_x && max_x_count == 1)
            {
                max_x_eff = second_max_x;
            }
            if (monsters[i].second == min_y && min_y_count == 1)
            {
                min_y_eff = second_min_y;
            }
            if (monsters[i].second == max_y && max_y_count == 1)
            {
                max_y_eff = second_max_y;
            }

            long long current_area = (long long)(max_x_eff - min_x_eff + 1) * (max_y_eff - min_y_eff + 1);
            if (current_area == n - 1 && (monsters[i].first < min_x_eff || monsters[i].first > max_x_eff || monsters[i].second < min_y_eff || monsters[i].second > max_y_eff))
            {
                ans = min(ans, current_area + min(max_x_eff - min_x_eff + 1, max_y_eff - min_y_eff + 1));
            }
            else
            {
                ans = min(ans, current_area);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}