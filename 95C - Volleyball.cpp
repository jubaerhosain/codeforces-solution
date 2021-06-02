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
const int N = 1e3+5;

ll d[N][N];
ll cost[N];
bool used[N];
vector<pii> g[N], g1[N];

void dijkstra(int s, ll *d, vector<pii> *g, int n) {
    rep(i, 0, n+1) {
        used[i] = false;
        d[i] = inf;
    }

    priority_queue<pii> q;
    d[s] = 0;
    q.push({0, s});
    while(!q.empty()) {
        int u = q.top().second;
        q.pop();
        if(used[u]) continue;
        used[u] = true;
        for(auto it: g[u]) {
            int v = it.first, w = it.second;
            if(d[u] + w < d[v]) {
                d[v] = d[u] + w;
                q.push({-d[v], v});
            }
        }
    }
}

void solve() {
    int n, m;
    cin >> n >> m;

    int x, y;
    cin >> x >> y;

    rep(i, 0, m) {
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }

    rep(i, 1, n+1) {
        dijkstra(i, d[i], g, n);
    }

    rep(u, 1, n+1) {
        int t, c;
        cin >> t >> c;
        rep(v, 1, n+1) {
            if(d[u][v] <= t) g1[u].push_back({v, c});
        }
    }

    dijkstra(x, cost, g1, n);

    if(cost[y] == inf) print(-1);
    else print(cost[y]);
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
