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
const ll inf = 1e16;
const int N = 1e5+5;
vector<pii> g[N];
vector<int> prnt(N);
vector<ll> d(N, inf);
vector<bool> used(N);

void dijkstra(int u) {
    priority_queue<pii, vector<pii>, greater<pii>> q;  //{w, v}
    q.push({0, u});
    d[u] = 0;

    while(!q.empty()) {
        u = q.top().second;
        q.pop();

        if(used[u]) continue;
        used[u] = true;

        for(auto a: g[u]) {
            ll v = a.first, w = a.second;
            if(d[u] + w < d[v]) {
                d[v] = d[u] + w;
                q.push({d[v], v});
                prnt[v] = u;
            }
        }
    }
}


void solve() {
    int n, m;
    cin >> n >> m;

    rep(i, 0, m) {
        int a, b, w;
        cin >> a >> b >> w;
        if(a == b) continue;
        g[a].push_back({b, w});
        g[b].push_back({a, w});
    }

    dijkstra(1);

    if(d[n] == inf) print(-1);
    else {
        int i = n;
        vector<int> ans;
        while(i != 1) {
            ans.push_back(i);
            i = prnt[i];
        }
        ans.push_back(i);

        reverse(ans.rbegin(), ans.rend());
        for(auto i: ans) cout << i << " ";
    }
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
