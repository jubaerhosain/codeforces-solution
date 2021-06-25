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
ll ans[N];
vector<int> g[N];
map<pii, int> mp;
int depth[N], up[N][20];

void binary_lifting(int u, int p, int d) {
    depth[u] = d;
    up[u][0] = p;
    rep(i, 1, 20) 
        up[u][i] = up[up[u][i-1]][i-1];
    
    for(int v: g[u]) {
        if(v == p) continue;
        binary_lifting(v, u, d+1);
    }
}

int lca(int a, int b) {
    if(depth[a] > depth[b])
        swap(a, b);

    int k = depth[b] - depth[a];
    rrep(i, 19, 0) {
        if(k >= (1<<i))  {
            b = up[b][i];
            k -= (1<<i);
        }
    }

    if(a == b)
        return a;

    rrep(i, 19, 0) {
        if(up[a][i] != -1 && (up[a][i] != up[b][i]))
            a = up[a][i], b = up[b][i];
    }

    return up[a][0];
}

void dfs(int u, int p) {
    for(int v: g[u]) {
        if(v == p)
            continue;
        dfs(v, u);
        ans[u] += ans[v];
        mp[{v, u}] = ans[v];
    }
}

void solve() {
    int n;
    cin >> n;

    vector<pii> ed;
    rep(i, 0, n-1) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
        ed.push_back({u, v});
    }
    
    binary_lifting(1, 0, 0);

    int k;
    cin >> k;
    while(k--) {
        int a, b;
        cin >> a >> b;
        int p = lca(a, b);
        ans[a] += 1;
        ans[b] += 1;
        ans[p] -= 2;
    }

    dfs(1, 0);

    for(pii it: ed) {
        if(mp[it])
            cout << mp[it] << " ";
        else {
            pii tmp = {it.second, it.first};
            cout << mp[tmp] << " ";
        }
    }
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
