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
int timer = 0;
vector<int> g[N];
int prnt[N], depth[N], in[N], out[N];

void dfs(int u, int p, int d) {
    prnt[u] = p;
    depth[u] = d;
    in[u] = timer++;
    for(int v: g[u]) {
        if(v != p)
            dfs(v, u, d+1);
    }
    out[u] = timer++;
}

bool ok(int u, int v) {
    return in[u] <= in[v] && out[u] >=  out[v];
}

void solve() {
    int n, m;
    cin >> n >> m;

    rep(i, 0, n-1) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    dfs(1, -1, 0);

    while (m--) {
        int k;
        cin >> k;

        vector<int> a(k);
        rep(i, 0, k) cin >> a[i];

        int mx = a[0];
        rep(i, 0, k) {
            if(depth[a[i]] > depth[mx])
                mx = a[i];
        }

        rep(i, 0, k) {
            if(prnt[a[i]] != -1)
                a[i] = prnt[a[i]]; 
        }

        bool ans = true;
        rep(i, 0, k) {
            ans &= ok(a[i], mx);
        }

        if(ans) print("YES");
        else print("NO");
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
