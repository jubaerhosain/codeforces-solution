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
const int N = 3e5+5;
vector<int> g[N];
vector<pii> q[N];
ll tmp[N], ans[N];

void dfs(int u, int p, int d, ll sum) {
    for(auto it: q[u]) {
        int l = d, r = d + it.first;
        tmp[l] += it.second;
        if(r+1 < N) tmp[r+1] -= it.second;
    }

    sum += tmp[d];
    ans[u] = sum;
    for(int v: g[u]) {
        if(v != p)
            dfs(v, u, d+1, sum);
    }

    for(auto it: q[u]) {
        int l = d, r = d + it.first;
        tmp[l] -= it.second;
        if(r+1 < N) tmp[r+1] += it.second;
    }
}

void solve() {
    int n;
    cin >> n;

    rep(i, 0, n-1) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    int m;
    cin >> m;
    while(m--) {
        int u, d, x;
        cin >> u >> d >> x;
        q[u].push_back({d, x});
    }

    dfs(1, -1, 0, 0);

    rep(i, 1, n+1) cout << ans[i] << " ";
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
