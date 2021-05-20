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
typedef vector<vector<int>> vii;

/*************User defined function*************/
const int inf = 1e9;
const int N = 1e3+5;
set<int> g[N];
int ds[N], dt[N];
bool used[N];

void solve() {
    int n, m, s, t;
    cin >> n >> m >> s >> t;

    rep(i, 0, m) {
        int u, v;
        cin >> u >> v;
        g[u].insert(v);
        g[v].insert(u);
    }

    queue<int> q;
    q.push(s);
    used[s] = true;
    while(!q.empty()) {
        int u = q.front();
        q.pop();
        for(int v: g[u]) {
            if(!used[v]) {
                q.push(v);
                used[v] = true;
                ds[v] = 1 + ds[u];
            }
        }
    }

    rep(i, 0, N) used[i] = false;

    q.push(t);
    used[t] = true;
    while(!q.empty()) {
        int u = q.front();
        q.pop();
        for(int v: g[u]) {
            if(!used[v]) {
                q.push(v);
                used[v] = true;
                dt[v] = 1 + dt[u];
            }
        }
    }

    int ans = 0;
    int dis = ds[t];
    rep(i, 1, n+1) {
        rep(j, i+1, n+1) {
            if(g[i].count(j) == 0) {
                if(ds[i]+dt[j]+1 >= dis 
                && ds[j]+dt[i]+1 >= dis) ans++;
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
