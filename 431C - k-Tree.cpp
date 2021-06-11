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

/*************User defined function*************/
int mod = 1e9+7;
const int N = 1e2+5;
int n, k, d;
int dp[N][N];

int dfs(int sum, int mx) {
    if(sum < 0) return 0;
    else if(dp[sum][mx] != -1) return dp[sum][mx];
    else if(sum == 0) return mx >= d ? 1 : 0;

    int size = 0;
    rep(i, 1, k+1) {
        size += dfs(sum-i, max(i, mx));
        size %= mod;
    }

    return dp[sum][mx] = size;
}

void solve() {
    cin >> n >> k >> d;

    rep(i, 0, N) rep(j, 0, N) dp[i][j] = -1;

    print(dfs(n, 0));
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
