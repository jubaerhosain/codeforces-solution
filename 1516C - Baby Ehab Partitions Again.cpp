#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define pqueue                  priority_queue
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define out(a, b)               cout << a << " " << b << endl;
#define rep(i, s, n)            for(int i = s; i < n; i++)
#define rrep(i, n, s)           for(int i = n; i >= s; i--)
typedef long long int ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<vector<bool>> vii;
const ll inf = INT_MAX;
const int N = 2e5+10;
const int p = 1e9+7;

/*************User defined function*************/
void solve() {
    int n;
    cin >> n;

    int sum = 0;
    vector<int> v(n+1);
    rep(i, 0, n) {
        cin >> v[i+1];
        sum += v[i+1];
    }

    if(sum&1) {
        print(0);
        return;
    }

    vii dp(n+1, vector<bool>(sum+1));
    rep(i, 0, n+1) dp[i][0] = true;

    rep(i, 1, n+1) {
        rep(j, 1, sum+1) {
            if(j < v[i]) dp[i][j] = dp[i-1][j];
            else dp[i][j] = dp[i-1][j] || dp[i-1][j-v[i]];
        }
    }

    if(!dp[n][sum/2]) {
        print(0);
        return;
    }

    print(1);
    rep(i, 0, 15) {
        rep(i, 1, n+1) {
            if(v[i]&1) {
                print(i);
                return;
            } else {
                v[i] /= 2;
            }
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
    cout << setprecision(12);

    int test = 1;
    //cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
