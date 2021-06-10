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
int a[N];
int cnt = 0;
vector<pii> g[N];

void dfs(int u, ll d) {
    if(d > a[u]) return;
    else if(d < 0) d = 0;
    cnt++;
    for(auto it: g[u]) {
        dfs(it.first, d + it.second);
    }
}

void solve() {
    int n;
    cin >> n;

    rep(i, 1, n+1) cin >> a[i];
    rep(i, 2, n+1) {
        int p, w;
        cin >> p >> w;
        g[p].push_back({i, w});
    }

    dfs(1, 0);

    print(n-cnt);
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
