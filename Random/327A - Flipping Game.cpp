#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define pqueue                  priority_queue
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define rep(i, s, n)            for(int i = s; i < n; i++)
#define rrep(i, n, s)           for(int i = n; i >= s; i--)
typedef long long int ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const int inf = INT_MAX;
const int N = 4e3+5;

/*************User defined function*************/
void solve() {
    int n;
    cin >> n;

    vector<int> v(n+1), dp(n+1);
    v[0] = dp[0] = 0;
    rep(i, 1, n+1) {
        cin >> v[i];
        dp[i] = (v[i] == 0 ? 1 : 0);
        v[i] += v[i-1];
        dp[i] += dp[i-1];
    }

    int ans = 0, cnt = 0;
    rep(i, 0, n+1) {
        rep(j, i, n+1) {
            ans = max(ans, v[i]+(dp[j]-dp[i])+(v[n]-v[j]));
        }
    }

    if(v[n] == n) ans--;
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
    cout << setprecision(9);

    int test = 1;
    //cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
