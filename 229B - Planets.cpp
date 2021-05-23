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
const ll inf = 1e16;
const int N = 1e5+5;
set<int> t[N];
vector<pii> g[N];
vector<ll> d(N, inf);

void solve() {
    int n, m;
    cin >> n >> m;

    rep(i, 0, m) {
        int u, v, c;
        cin >> u >> v >> c;
        g[u].push_back({v, c});
        g[v].push_back({u, c});
    }

    rep(i, 1, n+1) {
        int k, x;
        cin >> k;
        while(k--) {
            cin >> x;
            t[i].insert(x);
        }
    }

    priority_queue<pii, vector<pii>, greater<pii>> q;
    q.push({0, 1});
    d[1] = 0;
    while(!q.empty()) {
        int u = q.top().second;
        q.pop();
        int dist = d[u];
        while(t[u].count(dist)) dist++;
        for(auto a: g[u]) {
            int v = a.first, w = a.second;
            if(dist + w < d[v]) {
                d[v] = dist + w;
                q.push({d[v], v});
            }
        }
    }

    if(d[n] == inf) print(-1);
    else print(d[n]);
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
