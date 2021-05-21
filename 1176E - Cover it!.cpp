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
const int N = 2e5+5;
vector<int> g[N];
bool used[N];
int dist[N];

void solve() {
    int n, m;
    cin >> n >> m;

    rep(i, 0, n+5) {
        g[i].clear();
        used[i] = false;
        dist[i] = inf;
    }

    rep(i, 0, m) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    queue<int> q;
    vector<int> a, b;

    q.push(1);
    a.push_back(1);
    used[1] = true;
    while(!q.empty()) {
        int u = q.front();
        q.pop();
        for(auto v: g[u]) {
            if(!used[v]) {
                q.push(v);
                used[v] = true;
                dist[v] = 1 + dist[u];
                if(dist[v] & 1) b.push_back(v);
                else a.push_back(v);
            }
        }
    }

    if(a.size() > b.size()) a = b;
    
    print(a.size());
    for(auto i: a) cout << i << " ";
    print("");
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
    cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
