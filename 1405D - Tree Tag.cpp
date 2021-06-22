#include<bits/stdc++.h>
using namespace std;
#define endl          '\n'//notforintera
#define all(v)        v.begin(), v.end()
#define print(var)    cout << var << endl
#define out(a, b)     cout << a << " " << b << endl
#define rep(i, s, n)  for(int i = s; i < n; i++)
#define rrep(i, n, s) for(int i = n; i >= s; i--)
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;

/*************User defined function*************/
const int N = 1e5+5;
int distB;
int diam = 0;
vector<int> g[N];

int dfs(int u, int p, int d, int b) {
    int mx1 = 0, mx2 = 0;

    if(u == b) 
        distB = d;

    for(int v: g[u]) {
        if(v == p) 
            continue;
            
        int cnt = dfs(v, u, d+1, b);
        if(cnt > mx1) 
            mx2 = mx1, mx1 = cnt;
        else if(cnt > mx2) 
            mx2 = cnt;
    }

    diam = max(diam, mx1+mx2);

    return 1 + max(mx1, mx2);
}

void solve() {
    int n, a, b, da, db;
    cin >> n >> a >> b >> da >> db;

    diam = 0;
    rep(i, 1, n+1) g[i].clear();

    rep(i, 0, n-1) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    dfs(a, -1, 0, b);

    if(distB <= da) {
        print("Alice");
    } else {
        db = min(diam, db);
        if(db <= da*2) 
            print("Alice");
        else 
            print("Bob");
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
    cout << setprecision(16);

    int test = 1;
    cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
