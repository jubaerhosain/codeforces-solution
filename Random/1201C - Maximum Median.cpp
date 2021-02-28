#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define rev(v)                  v.rbegin(), v.rend()
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
#define scan_array(v, a, n)     for(ll i = a; i <= n; i++) { cin >> v[i]; }
#define print_array(v, a, n)    for(ll i = a; i <= n; i++) { cout << v[i] << " "; } println;
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
const int N = 2e5+5;

/*************User defined function*************/
void solve() {
    int n, k;
    cin >> n >> k;

    vector<ll> v(n);
    scan_array(v, 0, n-1);
    sort(all(v));

    if(n == 1) {
        print(v[0] + k);
        return;
    }

    int m = n/2;
    ll ans = v[m];
    ll low = 1, high = 1e18;
    while (low <= high) {
        ll mid = (low + high) / 2;
        ll sum = 0;
        rep(i, m, n-1) {
            if(v[i] <= mid) sum += (mid - v[i]);
            if(sum > k) break;
        }

        if(sum <= k) {
            ans = max(mid, ans);
            low = mid + 1;
        } else {
            high = mid - 1;
        }
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
    cout << setprecision(10);

    int test = 1;
    //cin >> test;
    while(test-- > 0) {
        solve();
    }

    return 0;
}    
