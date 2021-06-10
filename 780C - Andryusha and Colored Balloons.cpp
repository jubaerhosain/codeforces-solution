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
const int N = 2e5+5;
int color[N];
int mx_color;
vector<int> g[N];

void dfs(int u, int p) {
    int c = 1;
    for(int v: g[u]) {
        if(v == p) continue;
        while(c == color[u] || c == color[p]) c++;
        color[v] = c++;
    }

    for(int v: g[u]) {
        if(v == p) continue;
        dfs(v, u);
    }
}

void solve() {
    ll n;
    cin >> n;

    rep(i, 0, n-1) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
        mx_color = max(mx_color, (int)g[u].size());
        mx_color = max(mx_color, (int)g[v].size());
    }
    
    color[1] = 1;
    dfs(1, 0);

    print(mx_color+1);
    rep(i, 1, n+1) cout << color[i] << " ";
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
    //cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
