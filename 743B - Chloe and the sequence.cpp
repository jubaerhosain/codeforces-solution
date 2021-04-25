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
typedef pair<ll, ll> pii;
typedef vector<vector<bool>> vii;
const ll inf = INT_MAX;
const int N = 5e2+5;
const int p = 1e9+7;

/*************User defined function*************/
void solve() {
    ll n, k;
    cin >> n >> k;

    if(k&1) {
        print(1);
        return;
    }

    ll b = 2;
    vector<pii> v;
    for(ll i = 0; i <= n; i++) {
        ll x = pow(2, i);
        v.push_back({x, i+1});
    }

    rrep(i, n, 0) {
        auto p = v[i];
        if(k%p.first == 0) {
            print(p.second);
            return;
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
