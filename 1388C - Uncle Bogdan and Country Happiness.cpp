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
const int N = 1e5+5;
vector<int> g[N];
int p[N], h[N], good[N], tot[N];
bool flag = true;

void dfs(int u, int par) {
    tot[u] = p[u];
    int good_child = 0;
    for(int v: g[u]) {
        if(v == par) continue;
        dfs(v, u);
        tot[u] += tot[v];
        good_child += good[v];
    }

    if((tot[u]+h[u]) % 2 != 0) 
        flag = false;

    good[u] = (tot[u] + h[u]) / 2;
    if(good[u] < 0 || good[u] > tot[u]) 
        flag = false;
    
    if(good[u] < good_child) 
        flag = false;
}

void solve() {
    int n, m;
    cin >> n >> m;

    rep(i, 1, n+1) g[i].clear();

    rep(i, 1, n+1) cin >> p[i];
    rep(i, 1, n+1) cin >> h[i];

    rep(i, 0, n-1) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    flag = true;
    dfs(1, 0);

    if(flag) print("YES");
    else print("NO");
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


