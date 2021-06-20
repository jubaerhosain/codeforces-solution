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
vector<int> g[N];
int a[N], dp1[N], dp2[N];

void dfs1(int u, int p) {
    dp1[u] = a[u] == 1 ? 1 : -1;
    for(int v: g[u]) {
        if(v == p) continue;
        dfs1(v, u);
        dp1[u] += max(0, dp1[v]);
    }
}

void dfs2(int u, int p) {
    dp2[u] = dp1[u];
    if(p > 0) {
        int prev = dp2[p] - max(0, dp1[u]);
        dp2[u] = dp1[u] + max(0, prev);
    }
    for(int v: g[u]) {
        if(v == p) continue;
        dfs2(v, u);
    }
}

void solve() {
    int n;
    cin >> n;

    rep(i, 1, n+1) cin >> a[i];

    rep(i, 0, n-1) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    dfs1(1, 0);
    dfs2(1, 0);

    rep(i, 1, n+1) cout << dp2[i] << " ";
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
