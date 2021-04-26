#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define pqueue                  priority_queue
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define out(a, b)               cout << a << " " << b << endl;
#define rep(i, s, n)            for(int i = s; i < n; i++)
#define rrep(i, n, s)           for(int i = n; i >= s; i--)
typedef unsigned long long ll;
typedef long double ld;
typedef pair<ll, ll> pii;
typedef vector<vector<bool>> vii;
const ll inf = INT_MAX;
const int N = 5e2+5;
const int p = 1e9+7;

/*************User defined function*************/
void solve() {
    ll a, b;
    cin >> a >> b;

    int msba = 63 - __builtin_clzll(a);
    int msbb = 63 - __builtin_clzll(b);
    
    int ans = 0;
    while(msba <= msbb) {
        ll x = (1LL << msba);
        x = x | (x-1);
        rrep(i, msba-1, 0) {
            ll flag = ~(1LL<<i);
            ll val = x & flag;
            if(val >= a && val <= b) ans++;
        }
        msba++;
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
