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
const int inf = 1e9;
const int N = 2e5+5;
vector<int> g[N];
vector<int> d1(N, inf);
vector<int> dy(N, inf);

void bfs(int s, vector<int>& d) {
    queue<int> q;
    q.push(s);
    d[s] = 0;
    while(!q.empty()) {
        int u = q.front();
        q.pop();
        for(auto v: g[u]) {
            if(d[v] == inf) {
                d[v] = 1 + d[u];
                q.push(v);
            }
        }
    }
}

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    
    vector<int> sp(k);
    rep(i, 0, k) cin >> sp[i];

    rep(i, 0, m) {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    bfs(1, d1);
    bfs(n, dy);

    vector<pii> diff(k);
    rep(i, 0, k) diff[i] = {d1[sp[i]] - dy[sp[i]], sp[i]};

    sort(all(diff));

    int ans = 0, mx = -inf;
    for(auto it: diff) {
        int i = it.second;
        ans = max(ans, mx + dy[i]);
        mx = max(mx, d1[i]);
    }

    print(min(d1[n], ans+1));
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
