#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define des()                   greater<>()
#define rep(i, a, n)            for(ll i = a; i <= n; i++)  
#define rrep(i, n, a)           for(ll i = n; i >= a; i--)
#define pqueue                  priority_queue
#define pub                     push_back
#define pob                     pop_back  
#define endl                    '\n' //in interactive problem should not use this
#define print_array(v, a, n)    for(ll i = a; i <= n; i++) { cout << v[i] << " "; } cout << endl;
#define print(var)              cout << var << endl;
typedef long long int ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<vector<int>> vii;
const double pi = 3.141592653589793;
const int inf = INT_MAX;
const int N = 2e5+5;

/*************User defined function*************/
void solve() {
    int n, q;
    cin >> n >> q;

    vector<ll> a(n), k(q);
    rep(i, 0, n-1) {
        cin >> a[i];
        if(i > 0) a[i] += a[i-1];
    }

    rep(i, 0, q-1) cin >> k[i];

    ll curr = 0;
    rep(i, 0, q-1) {
        curr += k[i];
        if(curr >= a[n-1]) curr = 0;
        int pos = lower_bound(all(a), curr) - a.begin();
        if(a[pos] == curr) pos++;
        print(n-pos);
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
    cout << setprecision(10);

    int test = 1;
    //cin >> test;
    while(test-- > 0) {
        solve();
    }

    return 0;
}    
