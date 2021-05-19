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
typedef vector<vector<int>> vii;

/*************User defined function*************/
const int inf = 1e9;
const int N = 1e5+5;

void solve() {
    int n;
    cin >> n;

    vector<int> q(n+1), w(n+1);
    rep(i, 1, n+1) {
        cin >> q[i];
        w[i] = inf;
    }

    int m;
    cin >> m;
    rep(i, 0, m) {
        int u, v, c;
        cin >> u >> v >> c;
        w[v] = min(w[v], c);
    }

    ll ans = 0, cnt = 0;
    rep(i, 1, n+1) {
        if(w[i] == inf) cnt++;
        else ans += w[i];
    }

    if(cnt > 1) print(-1);
    else print(ans);
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
