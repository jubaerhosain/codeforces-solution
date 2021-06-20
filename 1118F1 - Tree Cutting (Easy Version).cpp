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
const int N = 3e5+5;
int ans = 0;
vector<int> g[N];
int a[N], cnt[N][3], tot[3];

void dfs(int u, int p) {
    cnt[u][a[u]] = 1;
    for(int v: g[u]) {
        if(v == p) continue;
        dfs(v, u);
        rep(i, 1, 3)
            cnt[u][i] += cnt[v][i];

        int c1 = cnt[v][1];
        int c2 = cnt[v][2];
        if(c1 <= 0 || c2 <= 0) {
            if(c1 == tot[1] || c2 == tot[2])
                ans++;
        }
    }
}

void solve() {
    int n;
    cin >> n;

    rep(i, 1, n+1) {
        cin >> a[i];
        tot[a[i]] += 1;
    }

    rep(i, 0, n-1) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    dfs(1, 0);

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
