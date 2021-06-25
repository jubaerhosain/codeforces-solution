#include<bits/stdc++.h>
using namespace std;
#define endl          '\n'//notforintera
#define all(v)        v.begin(), v.end()
#define print(var)    cout << var << endl
#define out(a, b)     cout << a << " " << b << endl
#define rep(i, s, n)  for(int i = s; i < n; i++)
#define rrep(i, n, s) for(int i = n; i >= s; i--)
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;

/*************User defined function*************/
const int N = 2e5+5;
vector<pii> g[N];
int up[N][20], a[N];
ll depth[N], ans[N];

void dfs(int u, int prnt) {
    up[u][0] = prnt;
    rep(i, 1, 20)
        up[u][i] = up[up[u][i-1]][i-1];
    
    int p = u;
    rrep(i, 19, 0) {
        if(depth[u] - depth[up[p][i]] <= a[u])
            p = up[p][i];
    }

    ans[up[p][0]]--;
    ans[up[u][0]]++;
    for(auto v: g[u]) {
        depth[v.first] = depth[u] + v.second; 
        dfs(v.first, u);
        ans[u] += ans[v.first];
    }
}

void solve() {
    int n;
    cin >> n;

    rep(i, 1, n+1) 
        cin >> a[i];

    rep(i, 2, n+1) {
        int p, w;
        cin >> p >> w;
        g[p].push_back({i, w});
    }

    dfs(1, 0);

    rep(i, 1, n+1) 
        cout << ans[i] << " ";
} 

/*************main function*************/
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 

    cout << fixed << showpoint;
    cout << setprecision(16);

    int test = 1;
    //cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
