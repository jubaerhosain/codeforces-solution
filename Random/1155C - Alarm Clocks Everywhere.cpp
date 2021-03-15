#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define pqueue                  priority_queues
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define rep(i, s, n)            for(int i = s; i < n; i++)
#define rrep(i, n, s)           for(int i = n; i >= s; i--)
typedef long long int ll;
typedef long double ld;
typedef pair<int, int> pii;
const ll inf = 1e18;
const int N = 1e5+5;

/*************User defined function*************/
ll gcd(ll a, ll b) {
    return b==0 ? a:gcd(b, a%b); 
}

void solve() {
    int n, m;
    cin >> n >> m;

    vector<ll> v(n), p(m);
    for(ll &i: v) cin >> i;
    for(ll &i: p) cin >> i;

    ll ans = v[1]-v[0];
    rep(i, 2, n) {
        ans = gcd(ans, v[i]-v[i-1]);
        if(ans == 1) break;
    }

    rep(i, 0, m) {
        if(ans%p[i] == 0) {
            print("YES");
            cout << v[0] << " " << i+1;
            return;
        }
    }

    print("NO");
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
