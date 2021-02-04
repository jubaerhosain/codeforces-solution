#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define rall(v)                 v.rbegin(), v.rend()
#define des()                   greater<>()
#define rep(i, a, n)            for(int i = a; i < n; i++)
#define rrep(i, n, a)           for(int i = n; i >= a; i--)
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
const int inf = INT_MAX;

/*************User defined function*************/
void solve() {
    ll n; cin >> n;
    
    vector<pair<ll, ll>> v;
    for(ll i = 2; i*i <= n; i++) {
        ll freq = 0;
        while(n%i == 0 and n > 1) {
            freq++;
            n /= i;
        }
        if(freq > 0) v.add(make_pair(freq, i));
    }

    //if n is prime than it would not divided
    if(n > 1) v.add(make_pair(1,n));

    sort(all(v), des());
    vector<ll> ans;
    rep(i, 0, v[0].first) {
        ans.add(v[0].second);
    }

    ll mul = 1;
    rep(i, 1, v.size()) {
        rep(j, 0, v[i].first) {
            mul *= v[i].second;
        }
    }
    ans[v[0].first-1] *= mul;
    
    print(v[0].first);
    print_array(ans);
    println;
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
