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
ll ans = 0;
int dp[N][505];
vector<int> g[N];

void dfs(int u, int p, int k) {
    dp[u][0] = 1;
    for(int v: g[u]) {
        if(v == p)
            continue;

        dfs(v, u, k);
        ans += dp[v][k-1];
        rep(i, 0, k-1)
            ans += dp[v][i] * dp[u][k-i-1];
        rep(i, 1, k+1)
            dp[u][i] += dp[v][i-1];
    }
}

void solve() {
    int n, k;
    cin >> n >> k;

    rep(i, 0, n-1) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    dfs(1, 0, k);

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
