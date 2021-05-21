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
typedef vector<vector<int>> vii;

/*************User defined function*************/
const int inf = 1e9;
const int N = 4e2+5;
set<int> gr[N], gb[N];
int d[N], used[N];

void bfs(set<int> g[], int n) {
    queue<int> q;

    q.push(1);
    used[1] = 1;
    while(!q.empty()) {
        int u = q.front();
        q.pop();
        for(int v: g[u]) {
            if(!used[v]) {
                q.push(v);
                used[v] = 1;
                d[v] = 1 + d[u];
            }
        }
    }

    if(d[n] == 0) print(-1);
    else print(d[n]);
}

void solve() {
    int n, m;
    cin >> n >> m;

    rep(i, 0, m) {
        int u, v;
        cin >> u >> v;
        gr[u].insert(v);
        gr[v].insert(u);
    }

    if(gr[1].count(n)) {
        rep(i, 1, n+1) {
            rep(j, i+1, n+1) {
                if(!gr[i].count(j)) {
                    gb[i].insert(j);
                    gb[j].insert(i);
                }
            }
        }
    }

    if(!gr[1].count(n)) bfs(gr, n);
    else bfs(gb, n);
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
