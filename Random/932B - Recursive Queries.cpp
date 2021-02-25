#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define rall(v)                 v.rbegin(), v.rend()
#define des()                   greater<int>()
#define rep(i, a, n)            for(ll i = a; i <= n; i++)  
#define rrep(i, n, a)           for(ll i = n; i >= a; i--)
#define pqueue                  priority_queue
#define umap                    unordered_map
#define uset                    unordered_set
#define pub                     push_back
#define pob                     pop_back  
#define endl                    '\n' //in interactive problem should not use this
#define println                 cout << endl
#define scan_array(arr, n)      for(ll i = 0; i < n; i++) { cin >> arr[i]; }
#define print_array(arr, n)     for(ll i = 0; i < n; i++) { cout << arr[i] << " "; } println;
#define print(var)              cout << var << endl;
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<vector<int>> vii;
const int p = 1e9+7;
const double pi = 3.141592653589793;
const int eps = 1e-9;
const int inf = INT_MAX;
const int N = 1e6+10;

/*************User defined function*************/
vii dp(10, vector<int>(N, 0));

int g(ll n) {
    if(n < 10) return n;

    ll res = 1;
    while(n) {
        if(n%10) res *= (n%10);
        n /= 10;
    }

    return g(res);
}

void solve() {
    rep(i, 1, N-1) {
        int x = g(i);
        dp[x][i] = 1;
    }

    rep(i, 1, 9) {
        rep(j, 1, N-1) {
            dp[i][j] += dp[i][j-1];
        }
    }

    int q, l, r, k;
    cin >> q;
    while(q--) {
        cin >> l >> r >> k;
        int ans = dp[k][r]-dp[k][l-1];
        print(ans);
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

    int test = 1;
    //cin >> test;
    while(test-- > 0) {
        solve();
    }

    return 0;
}    
