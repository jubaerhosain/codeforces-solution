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
typedef pair<ll, ll> pii;

/*************User defined function*************/
map<pii, ll> edge;

void update(ll u, ll v, ll w) {
    while(u != v) {
        if(v < u) swap(u, v);
        edge[{v, v/2}] += w;
        v /= 2;
    }
}

ll get_sum(ll u, ll v) {
    ll ans = 0;
    while(u != v) {
        if(v < u) swap(v, u);
        ans += edge[{v, v/2}];
        v /= 2;
    }
    return ans;
}

void solve() {
    int n;
    cin >> n;

    while(n--) {
        ll x, u, v, w;
        cin >> x >> u >> v;
        if(x == 1) {
            cin >> w;
            update(u, v, w);
        } else {
            print(get_sum(u, v));
        }
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
    //cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
