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
const int N = 1e5+5;
int dist[N];
vector<int> g[N];

void dfs(int u, int p, int d) {
    dist[d]++;
    for(int v: g[u]) {
        if(v == p) continue;
        dfs(v, u, d+1);
    }
}

void solve() {
    int n;
    cin >> n;

    rep(i, 2, n+1) {
        int x;
        cin >> x;
        g[i].push_back(x);
        g[x].push_back(i);
    }
    
    dfs(1, -1, 0);

    int ans = 0;
    rep(i, 0, n) ans += dist[i]%2;

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
    cout << setprecision(16);

    int test = 1;
    //cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
