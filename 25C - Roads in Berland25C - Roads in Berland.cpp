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
const int N = 3e2+5;

ll d[N][N];

ll get_sum(int n){
    ll sum = 0;
    rep(i, 1, n+1) rep(j, 1, n+1) {
        sum += d[i][j];
    }

    return sum;
}

void solve() {
    int n;
    cin >> n;
    
    rep(i, 1, n+1) rep(j, 1, n+1) {
        cin >> d[i][j];
    }

    rep(k, 1, n+1) {
        rep(i, 1, n+1) rep(j, 1, n+1) {
            d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
        }
    }

    int t;
    cin >> t;
    rep(q, 0, t) {
        int x, y, l;
        cin >> x >> y >> l;

        if(d[x][y] < l) {
            cout << get_sum(n)/2 << " ";
            continue;
        }
        d[x][y] = d[y][x] = l;
        for(auto k: {x, y}) {
            rep(i, 1, n+1) rep(j, 1, n+1) {
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
        
        cout << get_sum(n)/2 << " ";
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
    cout << setprecision(12);

    int test = 1;
    //cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
