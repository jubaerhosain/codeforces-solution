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
const int N = 3e5+5;
bool used[N];
vector<ll> d(N, inf);
vector<int> inx(N, -1);
vector<pair<int, pii>> g[N];

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    rep(i, 1, m+1) {
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({v, {w, i}});
        g[v].push_back({u, {w, i}});
    }

    priority_queue<pii, vector<pii>, greater<>> q;
    q.push({0, 1});
    d[1] = 0;
    vector<int> ans;
    while(!q.empty() && ans.size() < k) {
        int u = q.top().second;
        q.pop();
        if(used[u]) continue;
        if(inx[u] != -1) ans.push_back(inx[u]);
        used[u] = true;
        for(auto pi: g[u]) {
            int v = pi.first;
            int w = pi.second.first;
            int pos = pi.second.second;
            if(d[u] + w < d[v]) {
                d[v] = d[u] + w;
                q.push({d[v], v});
                inx[v] = pos;
            }
        }
    }

    print(ans.size());
    for(auto it: ans) cout << it << " "; 
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
