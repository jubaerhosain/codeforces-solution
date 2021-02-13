#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define rall(v)                 v.rbegin(), v.rend()
#define des()                   greater<>()
#define rep(i, a, n)            for(int i = a; i < n; i++)  
#define rrep(i, n, a)           for(int i = n; i >= a; i--)
#define bitcount(x)             __builtin_popcount(x)
#define bitcountll(x)           __builtin_popcountll(x)
#define umap                    unordered_map
#define uset                    unordered_set
#define add                     push_back
#define endl                    '\n'
#define println                 cout << endl;
#define scan_array(arr, n)      for(int i = 0; i < n; i++) cin >> arr[i];
#define print_array(arr)        for(auto val: arr) cout << val << " ";
#define print(var)              cout << var << endl
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
const int eps = 1e-9;
const int inf = INT_MAX;

/*************User defined function*************/
void solve() {
    ll A, B, n;
    cin >> A >> B >> n;

    vector<pair<ll,ll>> v(n);
    rep(i, 0, n) cin >> v[i].first;
    rep(i, 0, n) cin >> v[i].second;
    sort(all(v));

    rep(i, 0, n) {
        if(B <= 0) {
            print("NO"); return;
        } else {
            ll r1 = ceil((1.0*v[i].second)/(A*1.0));
            ll r2 = ceil((1.0*B)/(v[i].first*1.0));
            ll r = min(r1, r2);

            B -= (r*v[i].first);
            v[i].second -= (r*A);
        }
    }

    if(v[n-1].second > 0) print("NO");
    else print("YES");
}

/*************main function*************/
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 

    int test;
    cin >> test;
    while(test-- > 0) {
        solve();
    }

    return 0;
}    
