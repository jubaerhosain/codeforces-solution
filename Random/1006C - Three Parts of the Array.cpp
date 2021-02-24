#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define rall(v)                 v.rbegin(), v.rend()
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
#define scan_array(arr, n)      for(ll i = 0; i < n; i++) { cin >> arr[i]; }
#define print_array(arr, n)     for(ll i = 0; i < n; i++) { cout << arr[i] << " "; } println;
#define print(var)              cout << var << endl;
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<vector<ll>> vii;
const int p = 1e9+7;
const int eps = 1e-9;
const int inf = INT_MAX;
const int N = 1e5+10;

/*************User defined function*************/
void solve() {
    int n;
    cin >> n;

    vector<ll> v(n), pre(n, 0);
    rep(i, 0, n-1) {
        cin >> v[i];
        if(i == 0) pre[i] = v[i];
        else pre[i] = v[i] + pre[i-1];
    }
    
    ll ans = 0, r = 0;
    rrep(i, n-1, 0) {
        pre.pob();
        r += v[i];
        if(binary_search(all(pre), r)) ans = r;
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

    int test = 1;
    //cin >> test;
    while(test-- > 0) {
        solve();
    }

    return 0;
}    
