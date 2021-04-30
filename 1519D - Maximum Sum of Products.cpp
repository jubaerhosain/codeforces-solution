#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define pqueue                  priority_queue
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define out(a, b)               cout << a << " " << b << endl
#define rep(i, s, n)            for(int i = s; i < n; i++)
#define rrep(i, n, s)           for(int i = n; i >= s; i--)
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pii;
typedef vector<vector<int>> vii;
const ll inf = INT_MAX;
const int N = 5e3+5;
const int p = 1e9+7;

/*************User defined function*************/
ll pref[N];
ll dp[N][N];

void solve() {
    int n;
    cin >> n;

    vector<ll> a(n+1), b(n+1);
    rep(i, 1, n+1) cin >> a[i];
    rep(i, 1, n+1) cin >> b[i];

    rep(i, 1, n+1) {
        pref[i] = pref[i-1] + a[i]*b[i];
    }

    rep(k, 1, n+1) {
        rep(i, 1, n+1) {
            int j = i+k-1;
            if(j > n) break;
            if(k == 1) dp[i][j] = a[i]*b[j];
            else if(k == 2) dp[i][j] = a[i]*b[j] + a[j]*b[i];
            else dp[i][j] = dp[i+1][j-1] + a[i]*b[j] + a[j]*b[i];
        }
    }

    ll ans = pref[n];
    rep(i, 1, n+1) {
        rep(j, i+1, n+1) {
            ll sum = pref[i-1] + dp[i][j] + pref[n] - pref[j];
            ans = max(sum, ans);
        }
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
