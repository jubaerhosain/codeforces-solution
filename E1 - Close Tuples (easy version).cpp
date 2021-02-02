#include<bits/stdc++.h>
using namespace std;
#define all(v)          v.begin(), v.end()
#define rall(v)         v.rbegin(), v.rend()
#define des()           greater<>()
#define rep(i, a, n)    for(int i = a; i < n; i++)
#define rrep(i, n, a)   for(int i = n; i >= a; i--)
#define umap            unordered_map
#define uset            unordered_set
#define add             push_back
#define ll              long long
#define ull             unsigned long long
#define mod(a, b, p)    ((a%p)*(b%p))%p
#define newline         cout << endl;
#define scan_array(arr, n)   for(int i = 0; i < n; i++) cin >> arr[i];
#define print_array(arr)     for(int val: arr) cout << val << " ";
#define print(var)     cout << var << endl
//#define inf 1e9
//#define mod 1e9+7

/*************User defined function*************/
ull getWay(ull n) {
    return (n*(n+1))/2;
}

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    scan_array(v, n);
    
    ull ans = 0;
    sort(all(v));
    rep(i, 0, n) {
        ull next = 2+v[i];
        int up = upper_bound(all(v), next) - v.begin();
        up--;
        if(up-i >= 1) {
            ans += getWay(up-i-1);
        }
    }

    print(ans);
}

/*************main function*************/
int main() {
    int test;
    cin >> test;
    while(test-- > 0) {
        solve();
    }
    return 0;
}    
