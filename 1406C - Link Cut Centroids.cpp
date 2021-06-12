#include<bits/stdc++.h>
using namespace std;
#define endl          '\n'
#define all(v)        v.begin(), v.end()
#define print(var)    cout << var << endl
#define out(a, b)     cout << a << " " << b << endl
#define rep(i, s, n)  for(int i = s; i < n; i++)
#define rrep(i, n, s) for(int i = n; i >= s; i--)
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;

/*************User defined function*************/
const int N = 1e5+5;
int sz[N];
vector<int> g[N];

void dfs(int u, int p) {
    sz[u] = 1;
    for(int v: g[u]) {
        if(v == p) continue;
        dfs(v, u);
        sz[u] += sz[v];
    }
}

int centroid(int u, int p, int n) {
    for(int v: g[u]) {
        if(v == p) continue;
        if(sz[v] > n/2)
            return centroid(v, u, n);;
    }
    return u;
}

void solve() {
    int n;
    cin >> n;
    
    rep(i, 1, n+1) {
        sz[i] = 0;
        g[i].clear();
    }

    rep(i, 0, n-1) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    dfs(1, 0);
    int x = centroid(1, 0, n);  
    int y = -1;
    for(int v: g[x]) {
        if(sz[v]*2 == n) {
            y = v;
            break;
        }
    }

    if(y == -1) {
        out(1, g[1][0]);
        out(1, g[1][0]);

    } else {
        int lf = x;
        for(int v: g[y]) {
            if(v == x) continue;
            lf = v;
            break;
        }
        out(y, lf);
        out(x, lf);
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
    cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
