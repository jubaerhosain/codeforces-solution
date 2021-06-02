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
const int N = 2e2+5;
int diam;
vector<int> g[N];

int height(int u, int p) {
    vector<int> h;

    for(auto v: g[u]) {
        if(v != p) {
             h.push_back(height(v, u));
        }
    }

    if(h.size() == 0) return 1;
    else if(h.size() == 1) {
        diam = max(diam, h[0]);
        return 1 + h[0];
    } else {
        sort(all(h), greater<>());
        diam = max(diam, h[0] + h[1]);
        return 1 + max(h[0], h[1]);
    }
}

void solve() {
    int n;
    cin >> n;

    vector<pii> edges(n-1);
    rep(i, 0, n-1) {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
        edges[i] = {x, y};
    }
    
    int d1, d2;
    int ans = 0;
    rep(i, 0, n-1) {
        diam = 0;
        height(edges[i].first, edges[i].second);
        d1 = diam;
        diam = 0;
        height(edges[i].second, edges[i].first);
        d2 = diam;
        ans = max(ans, d1*d2);
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
    cout << setprecision(12);

    int test = 1;
    //cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
