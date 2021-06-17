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
int mod = 1e9+7;
const int N = 1e5+5;
ll sub[N];
vector<int> g[N];
vector<ll> edges;

void dfs(int u, int p, int n) {
    sub[u] = 1;
    for(int v: g[u]) {
        if(v == p) continue;
        dfs(v, u, n);
        sub[u] += sub[v];
        edges.push_back(sub[v]*(n-sub[v]));
    }
}

void solve() {
    int n;
    cin >> n;

    edges.clear();
    rep(i, 1, n+1) {
        sub[i] = 0;
        g[i].clear();
    }

    rep(i, 0, n-1) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    dfs(1, 0, n);
    sort(all(edges), greater<>());
    rep(i, 0, n-1) edges[i] %= mod;

    int m;
    cin >> m;
    vector<ll> factors(m);
    rep(i, 0, m) cin >> factors[i];
    sort(all(factors), greater<>());

    int j = 0;
    ll ans = 0;
    rep(i, 0, max(n-1, m)) {
        if(i >= m) {
            ans += edges[i];
            ans %= mod;
        } else if(m-i > n-1) {
            factors[i+1] *= factors[i];
            factors[i+1] %= mod;
            j++;
        } else {
            ans += (factors[i]*edges[i-j])%mod;
            ans %= mod;
        }
    }

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
    cin >> test;
    while(test--) {
        solve();
    }
 
    return 0;
}
