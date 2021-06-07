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
const int N = 1e5+5;
ll dp[N][2];
vector<pii> a(N);
vector<int> g[N];

void dfs(int u, int p) {
    for(int v: g[u]) {
        if(v == p) continue;
        dfs(v, u);
        dp[u][0] += max(dp[v][0]+abs(a[u].first-a[v].first), dp[v][1]+abs(a[u].first-a[v].second)); 
        dp[u][1] += max(dp[v][0]+abs(a[u].second-a[v].first), dp[v][1]+abs(a[u].second-a[v].second));
    }
}

void solve() {
    int n;
    cin >> n;

    rep(i, 1, n+1) {
        g[i].clear();
        dp[i][0] = dp[i][1] = 0;
    }
    rep(i, 1, n+1) {
        int l, r;
        cin >> l >> r;
        a[i] = {l, r};
    }

    rep(i, 0, n-1) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    dfs(1, 0);

    print(max(dp[1][0], dp[1][1]));
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
