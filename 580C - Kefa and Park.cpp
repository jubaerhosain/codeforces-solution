#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define out(a, b, c)            cout << a << " " << b << " " << c << endl
#define rep(i, s, n)            for(int i = s; i < n; i++)
#define rrep(i, n, s)           for(int i = n; i >= s; i--)
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pii;

/*************User defined function*************/
const ll inf = 1e18;
const int N = 2e5+5;

int cat[N];
vector<int> g[N];

int n, m;
int ans = 0;

void dfs(int u, int p, int cnt) {
    if(cnt > m) return;
    else if(g[u].size() == 1 && u != 1) {
        ans++;
        return;
    }

    for(auto v: g[u]) {
        if(v != p) {
            dfs(v, u, (cat[v]==0 ? 0:cnt+1));
        }
    }
}

void solve() {
    cin >> n >> m;

    rep(i, 1, n+1) cin >> cat[i];
    rep(i, 0, n-1) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    dfs(1, 0, cat[1]);

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
    cout << setprecision(12);

    int test = 1;
    //cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
