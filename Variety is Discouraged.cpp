#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        set<int> distinct(arr.begin(), arr.end());

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            distinct.insert(arr[i]);
        }

        if(n == 1)
        {
            cout << 1 << " " << 1 << endl;
            continue;
        }

        int d = distinct.size();
        if(d == 1)
        {
            cout << 0 << endl;
            continue;
        }

        int original_score = n - d;
        vector<int> prefix_distinct(n, 0);
        set<int> prefix_set;

        for(int i = 0; i < n; i++)
        {
            prefix_set.insert(arr[i]);
            prefix_distinct[i] = prefix_set.size();
        }

        vector<int> suffix_distinct(n, 0);
        set<int> suffix_set;
        for(int j = n - 1; j >= 0; j--)
        {
            suffix_set.insert(arr[j]);
            suffix_distinct[j] = suffix_set.size();
        }

        map<int, int> first, last;
        for(int i = 0; i < n; i++)
        {
            if(first.find(arr[i]) == first.end())
            {
                first[arr[i]] = i;
            }
            last[arr[i]] = i;
        }

        int max_case3 = -1e9;
        pair<int, int> best_remove = {0, 0};
        for(auto &x : first)
        {
            if(first[x.first] >= last[x.first])
            {
                continue;
            }

            int i = first[x.first], j = last[x.first];
            int pd = prefix_distinct[i], sd = suffix_distinct[j];
            int new_length = (i + 1) + (n - j);
            int union_d = pd + sd - 1;
            int current_score = new_length - union_d;
            int current_remove_length = (j - 1) - (i + 1) + 1;
            if (j <= i + 1)
            {
                current_remove_length = 0;
            }
            if(current_score > max_case3 || (current_score == max_case3 && current_remove_length > (best_remove.second - best_remove.first + 1)))
            {
                max_case3 = current_score;
                best_remove = {i + 1, j - 1};
            }
        }

        int max_prefix_removal = -1e9, best_prefix_k = 0;
        for(int k = 1; k < n; k++)
        {
            int current_score = (n - k) - suffix_distinct[k];
            if(current_score > max_prefix_removal || (current_score == max_prefix_removal && k > best_prefix_k))
            {
                max_prefix_removal = current_score;
                best_prefix_k = k;
            }
        }

        int max_suffix_removal = -1e9;
        int best_suffix_k = 0;
        for(int k = 1; k < n; k++)
        {
            int pos = n - k - 1;
            int current_score = (n - k) - prefix_distinct[pos];
            if (current_score > max_suffix_removal || (current_score == max_suffix_removal && k > best_suffix_k))
            {
                max_suffix_removal = current_score;
                best_suffix_k = k;
            }
        }

        vector<int> max_candidates = {original_score, max_prefix_removal, max_suffix_removal, max_case3};
        int max_score = *max_element(max_candidates.begin(), max_candidates.end());

        vector<pair<int, int>> candidates;
        if(max_score == original_score)
        {
            if(max_prefix_removal == original_score)
            {
                candidates.push_back({0, best_prefix_k - 1});
            }
            if(max_suffix_removal == original_score)
            {
                candidates.push_back({n - best_suffix_k, n - 1});
            }
            if(max_case3 == original_score)
            {
                candidates.push_back(best_remove);
            }
            candidates.push_back({-1, -1});
        }
        else
        {
            if(max_score == max_prefix_removal)
            {
                candidates.push_back({0, best_prefix_k - 1});
            }
            if(max_score == max_suffix_removal)
            {
                candidates.push_back({n - best_suffix_k, n - 1});
            }
            if(max_score == max_case3)
            {
                candidates.push_back(best_remove);
            }
        }

        int best_l = -1, best_r = -2, max_removal = -1;
        for (auto x : candidates)
        {
            int l = x.first, r = x.second;
            int current_removal = (l == -1 && r == -1) ? 0 : r - l + 1;
            if(current_removal > max_removal)
            {
                max_removal = current_removal;
                best_l = l;
                best_r = r;
            }
        }

        if(best_l == -1 && best_r == -1)
        {
            cout << 0 << " " << 0 << endl;
        }
        else
        {
            cout << best_l + 1 << " " << best_r + 1 << endl;
        }
    }

    return 0;
}