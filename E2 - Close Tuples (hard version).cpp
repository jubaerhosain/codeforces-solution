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
#define newline                 cout << endl;
#define scan_array(arr, n)      for(int i = 0; i < n; i++) cin >> arr[i];
#define print_array(arr)        for(int val: arr) cout << val << " ";
#define print(var)              cout << var << endl
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;

/*************nCr%mod Little Fermat Algorithm*************/
const ll N = 2*1e5;
const ull mod = 1e9+7;
ull fac[N+1]; 
void factorial() {                           // It should be initialized first
    fac[0] = 1;
    for(int i = 1; i <= N; i++)
        fac[i] = (fac[i - 1] * i) % mod;
}
ull power(ull x, ull y, ull mod) {
    ull res = 1;                             // Initialize result
    x = x % mod;                               // Update x if it is more than or equal to p
    while(y > 0) {
        if (y & 1)                           // If y is odd, multiply x with result
            res = (res * x) % mod;
        y = y >> 1;                          // y = y/2, y must be even now
        x = (x * x) % mod;
    }
    return res;
}   
ull modInverse(ull n, ull mod) {
    return power(n, mod-2, mod);
}  
ull nCrModPFermat(ull n, ull r, ull mod) {
    if(n < r)                               // If n<r, then nCr should return 0
        return 0;
    if(r == 0)                              // Base case
        return 1;
    return (fac[n]*modInverse(fac[r],mod)%mod*modInverse(fac[n-r],mod)%mod)%mod;
}

/*************User defined function*************/
void solve() {
    int n, m, k; 
    cin >> n >> m >> k;

    vector<int> v(n);
    scan_array(v, n);
    sort(all(v));
    
    ull ans = 0;
    rep(i, 0, n) {
        int upb = upper_bound(all(v), v[i]+k)-v.begin();
        upb -= i;
        if(upb >= 1) {
            ull way = nCrModPFermat(upb-1, m-1, mod);
            ans = (ans+way)%mod;
            ans %= mod;
        }
    }

    print(ans);
}

/*************main function*************/
int main() {
    //for little fermat algo
    factorial();     

    int test;
    cin >> test;
    while(test-- > 0) {
        solve();
    }
    return 0;
}    
