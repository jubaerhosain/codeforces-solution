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
const int N = 5e2+5;
ll d[N][N];
int x[N];

void solve() {
    int n;
    cin >> n;

    rep(i, 0, n) rep(j, 0, n) {
        cin >> d[i][j];
    } 

    rep(i, 0, n) {
        cin >> x[i];
        x[i]--;
    }

    vector<ll> ans(n);
    rrep(k, n-1, 0) {
        rep(i, 0, n) rep(j, 0, n) {
            d[i][j] = min(d[i][j], d[i][x[k]]+d[x[k]][j]);
        }
        rep(i, k, n) rep(j, k, n) {
            ans[k] += d[x[i]][x[j]];
        }
    }

    for(auto i: ans) cout << i << " ";
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
