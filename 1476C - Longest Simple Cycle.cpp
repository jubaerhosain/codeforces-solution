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
#define pb                      push_back
#define endl                    '\n'    //in interactive problem should not use this
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
    int n; cin >> n;

    vector<int> c(n), a(n), b(n);
    scan_array(c, n);
    scan_array(a, n);
    scan_array(b, n);

    ull ans = 0, curr = c[n-1]-1;
    rrep(i, n-1, 1) {
        if(a[i] == b[i]) {
            ans = max(ans, curr+2);
            curr = c[i-1]-1;
        } else {
            ans = max(ans, curr+2+abs(a[i]-b[i]));
            curr = max(c[i-1]-1ull, curr+2+c[i-1]-1-(abs(a[i]-b[i])));
        }
    }

    print(ans);
}

/*************main function*************/
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 

    int test;
    cin >> test;
    while(test-- > 0) {
        solve();
    }

    //solve();

    return 0;
}    
