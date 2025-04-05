#include <bits/stdc++.h>
using namespace std;

// Shorts
#define int long long
#define dbg(x) cout << #x << " = " << x << '\n';

// DataTypes
// using int = long long;
using ld = long double;
using vl = vector<int>;
using vvl = vector<vector<int>>;
using vvvl = vector<vector<vector<int>>>;

// Algorithms
#define sz(x) ((int)(x).size())
#define aint(x) x.begin(), x.end()
#define srt(x) sort(aint(x))
#define srtd(x) sort(x.rbegin(), x.rend())
#define rev(x) reverse(aint(x));
#define Vmax(x) *max_element(aint(x))
#define Vmin(x) *min_element(aint(x))
#define Vsum(x) accumulate(aint(x), 0int)
#define lowB(v, x) lower_bound(aint(v), x) - v.begin() // >=x
#define upB(v, x) upper_bound(aint(v), x) - v.begin()  // > x
#define ers(v, i) v.erase(v.begin() + i)
#define uniq(x) x.erase(unique(aint(x)), x.end())
#define NextP(x) next_permutation(aint(x))
#define previousP(x) previous_permutation(aint(x))
#define cntB(x) __builtin_popcountint(x)
#define cntC(s, x) int(count(aint(s), x));
#define ord(k) order_of_key(k)

// loops
#define For(n) for (int i = 0; i < n; i++)
#define ForR(n) for (int i = n - 1; i >= 0; i--)
#define Forj(n) for (int j = 0; j < n; j++)
#define Fork(n) for (int k = 0; k < n; k++)
#define For1(n) for (int i = 1; i < n; i++)
#define lp(s, n) for (int i = s; i < n; i++)
#define lprevious(s, n) for (int i = s; i >= n; i--)

// IO
#define nl cout << "\n";
#define ya cout << "YES\n"
#define na cout << "NO\n"
#define inpt(v) For(sz(v)) cin >> v[i];
#define prt(v)            \
    for (auto i : v)      \
        cout << i << " "; \
    cout << "\n";
#define prt2(v)                                    \
    For(sz(v))                                     \
    {                                              \
        Forj(sz(v[0])) { cout << v[i][j] << " "; } \
        nl                                         \
    }

// Constants
const int M = 1e9 + 7;
const int MOD = 998244353;
// const int N = 2e5 + 5;
const ld pi = 3.141592653589793238;
const long long INF = 1e15 + 1703;

void dfs(int node, vector<bool> &vis, map<int, vector<int>> &g, int &cnt)
{
    vis[node] = true;
    cnt++;
    for (int nbr : g[node])
        if (!vis[nbr])
            dfs(nbr, vis, g, cnt);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;

    map<string, int> id;
    map<int, vector<int>> g;
    int nxt = 0;

    for (int i = 0; i < m; i++)
    {
        string a, b;
        cin >> a >> b;
        if (!id.count(a))
            id[a] = nxt++;
        if (!id.count(b))
            id[b] = nxt++;
        g[id[a]].push_back(id[b]);
        g[id[b]].push_back(id[a]);
    }

    vector<bool> vis(n, false);
    vector<int> comps;

    for (int i = 0; i < nxt; i++)
    {
        if (!vis[i])
        {
            int cnt = 0;
            dfs(i, vis, g, cnt);
            comps.push_back(cnt);
        }
    }

    int isolated = n - nxt;
    for (int i = 0; i < isolated; i++)
        comps.push_back(1);

    srtd(comps);

    int ans = 0;
    for (int i = 0; i < min(k, sz(comps)); i++)
        ans += comps[i];

    cout << ans << endl;
}