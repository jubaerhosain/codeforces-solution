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
typedef pair<ll, ll> pii;

/*************User defined function*************/
const ll inf = 1e18;
const int N = 1e5+5;

vector<int> g[N];

void solve() {
    int n;
    cin >> n;


    vector<int> ans(n-1);
    rep(i, 0, n-1) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(i);
        g[v].push_back(i);
        ans[i] = -1;
    }

    int mx = 0, u;
    rep(i, 1, n+1) {
        if(mx < g[i].size()) {
            mx = g[i].size();
            u = i;
        }
    }

    int curr = 0;;
    for(auto i: g[u]) ans[i] = curr++;
    rep(i, 0, n-1) if(ans[i] == -1) ans[i] = curr++;

    for(auto i: ans) print(i);
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
