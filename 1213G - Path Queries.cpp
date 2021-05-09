#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define pqueue                  priority_queue
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define out(a, b)               cout << a << " " << b << endl
#define rep(i, s, n)            for(int i = s; i < n; i++)
#define rrep(i, n, s)           for(int i = n; i >= s; i--)
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<vector<int>> vii;
const ll inf = INT_MAX;
const int p = 1e9+7;
const int N = 1e6+5;

/*************User defined function*************/
ll res = 0;
vector<int> prnt, rnk;

ll get(ll cnt) {
    return cnt*(cnt-1)/2;
}

int find(int u) {
    if(prnt[u] == -1) return u;
    return prnt[u] = find(prnt[u]);
}

void merge(int u, int v) {
    u = find(u);
    v = find(v);

    if(rnk[u] < rnk[v]) swap(u, v);

    res -= get(rnk[u]);
    res -= get(rnk[v]);
    res += get(rnk[u]+rnk[v]);

    rnk[u] += rnk[v];
    prnt[v] = u;
}

void solve() {
    int n, m;
    cin >> n >> m;

    rnk = vector<int>(n, 1);
    prnt = vector<int>(n, -1);

    vector<pair<int, pii>> edges(n-1);
    rep(i, 0, n-1) {
        int u, v, w;
        cin >> u >> v >> w;
        u--, v--;
        edges[i].first = w;
        edges[i].second = {u, v};
    }

    vector<pii> q(m);
    rep(i, 0, m) {
        int x;
        cin >> x;
        q[i] = {x, i};
    }

    sort(all(q));
    sort(all(edges));

    int inx = 0;
    vector<ll> ans(m, 0);
    rep(i, 0, m) {
        while(inx < n-1 && edges[inx].first <= q[i].first) {
            int u = edges[inx].second.first;
            int v = edges[inx].second.second;
            merge(u, v);
            inx++;
        }
        ans[q[i].second] = res;
    }

    for(auto i: ans) cout << i << " ";
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
