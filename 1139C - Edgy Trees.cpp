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
const ll inf = 1e18;
const int N = 2e5+5;
const ll mod = 1e9+7;

/*************User defined function*************/
int cnt;
bool used[N];
vector<int> g[N];

ll mod_pow(ll x, ll n, ll p) {
    int res = 1;
    
    while(n) {
        if(n&1) {
            res = (res*x)%p;
            n--;
        } else {
            x = (x*x)%p;
            n /= 2;
        }
    }

    return res;
}

void dfs(int u) {
    cnt++;
    used[u] = true;
    for(auto v: g[u]) {
        if(!used[v]) dfs(v);
    }
}

void solve() {
    int n, k;
    cin >> n >> k;

    rep(i, 0, n-1) {
        int u, v, x;
        cin >> u >> v >> x;
        if(x == 0) {
            g[u].push_back(v);
            g[v].push_back(u);
        }
    }

    ll ans = mod_pow(n, k, mod);
    rep(i, 1, n+1) {
        if(used[i]) continue;
        cnt = 0;
        dfs(i);
        ans -= mod_pow(cnt, k, mod);
        ans += mod;
        ans %= mod;
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
    cout << setprecision(16);

    int test = 1;
    //cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
