#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define pqueue                  priority_queue
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define rep(i, s, n)            for(int i = s; i < n; i++)
#define rrep(i, n, s)           for(int i = n; i >= s; i--)
typedef long long int ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<vector<int>> vii;
const ll inf = 1e9;
const int N = 2e5+5;

/*************User defined function*************/
void out(int a, int b) {
    cout << a << " " << b << endl;
}

vector<int> c;
map<int, vector<int>> g;
int mn;

void dfs(int u) {
    mn = min(mn, c[u]);
    c[u] = -1;
    for(int v: g[u]) {
        if(c[v] != -1) {
            dfs(v);
        }
    }
}

void solve() {
    int n, m;
    cin >> n >> m;

    c.resize(n);
    rep(i, 0, n) cin >> c[i];

    rep(i, 0, m) {
        int x, y;
        cin >> x >> y;
        x--, y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    ll ans = 0;
    rep(i, 0, n) {
        mn = inf;
        if(c[i] != -1) dfs(i);
        else continue;

        ans += mn;
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
    cout << setprecision(9);

    int test = 1;
    //cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
