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
typedef pair<int, int> pii;

/*************User defined function*************/
const ll inf = 1e9;
const int N = 1e5+5;

bool used[N];
vector<pii> g[N];
vector<int> d(N, inf);

void solve() {
    int n, m, s;
    cin >> n >> m >> s;

    rep(i, 0, m) {
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }

    int l;
    cin >> l;

    priority_queue<pii, vector<pii>, greater<pii>> pq;
    d[s] = 0;
    pq.push({0, s});
    while(!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        if(used[u]) continue;
        used[u] = true;
        for(auto it: g[u]) {
            int v = it.first, w = it.second;
            if(d[u] + w < d[v]) {
                d[v] = d[u] + w;
                pq.push({d[v], v});
            }
        }
    }

    int ans = 0;
    rep(u, 1, n+1) {
        if(d[u] == l) ans++;
        else if(d[u] < l) {
            for(auto it: g[u]) {
                int v = it.first, w = it.second;
                if(d[u] + w <= l) continue;
                if(l - d[v] < w - (l - d[u]) || l - d[v] == w - (l - d[u]) && u < v) ans++;
            }
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
    cout << setprecision(12);

    int test = 1;
    //cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
