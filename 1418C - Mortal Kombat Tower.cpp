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
const int N = 2e5+5;
int dp[N][2];

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    rep(i, 0, n) 
        cin >> a[i];

    if(n == 1) {
        print(a[0]);
        return;
    }

    rep(i, 0, n) 
        dp[i][0] = dp[i][1] = inf;

    dp[0][0] = a[0];
    dp[0][1] = inf;
    dp[1][0] = a[0] + a[1];
    dp[1][1] = dp[0][0];
    rep(i, 2, n) {
        dp[i][0] = min(dp[i][0], dp[i-2][1]+a[i-1]+a[i]);
        dp[i][0] = min(dp[i][0], dp[i-1][1]+a[i]);
        dp[i][1] = min(dp[i][1], dp[i-2][0]);
        dp[i][1] = min(dp[i][1], dp[i-1][0]);
    }
     
    print(min(dp[n-1][0], dp[n-1][1]));
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
    cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
