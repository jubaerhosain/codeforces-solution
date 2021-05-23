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
vector<int> prnt, rnk;

int find(int u) {
    if(prnt[u] == -1) return u;
    return prnt[u] = find(prnt[u]);
}

void merge(int u, int v) {
    u = find(u);
    v = find(v);

    if(rnk[u] < rnk[v]) swap(u, v);

    rnk[u] += rnk[v];
    prnt[v] = u;
}

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    prnt.resize(n+1, -1);
    rnk.resize(n+1, 0);
    rep(i, 0, k) {
        int x;
        cin >> x;
        rnk[x]++;
    }

    vector<pair<int, pii>> edges(m);
    rep(i, 0, m) {
        int u, v, w;
        cin >> u >> v >> w;
        edges[i].first = w;
        edges[i].second = {u, v};
    }

    sort(all(edges));

    int ans = 0;
    rep(i, 0, m) {
        int u = edges[i].second.first;
        int v = edges[i].second.second;
        u = find(u);
        v = find(v);
        if(u == v) continue;
        merge(u, v);
        if(rnk[u] >= k || rnk[v] >= k) {
            ans = edges[i].first;
            break;
        }
    }

    rep(i, 0, k) cout << ans << " ";
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
