#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define out(a, b)               cout << a << " " << b << endl
#define rep(i, s, n)            for(int i = s; i < n; i++)
#define rrep(i, n, s)           for(int i = n; i >= s; i--)
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;

/*************User defined function*************/
const int N = 3e5+5;
int prnt[N];
vector<int> g[N];
ll subtree_size[N];

int dfs(int u, int p) {
    prnt[u] = p;
    int size = 1;
    for(int v: g[u]) {
        if(v == p) continue;
        size += dfs(v, u);
    }

    subtree_size[u] = size;
    return size;
}

void solve() {
    ll n, x, y;
    cin >> n >> x >> y;

    rep(i, 0, n-1) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    
    dfs(x, 0);

    int z = y;
    while(prnt[z] != x) z = prnt[z];

    ll ans = n*(n-1) - subtree_size[y]*(subtree_size[x]-subtree_size[z]);
    print(ans);
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
