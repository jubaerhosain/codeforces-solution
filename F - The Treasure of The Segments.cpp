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
#define newline                 cout << endl
#define scan_array(arr, n)      for(int i = 0; i < n; i++) cin >> arr[i];
#define print_array(arr)        for(int val: arr) cout << val << " ";
#define print(var)              cout << var << endl
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;

/*************User defined function*************/
void solve() {
    int n; cin >> n;

    int l[n], r[n];
    vector<int> v1(n), v2(n);
    rep(i, 0, n) {
        cin >> l[i] >> r[i];
        v1[i] = l[i];
        v2[i] = r[i];
    }

    sort(all(v1));
    sort(all(v2));
    int ans = 0;
    rep(i, 0, n) {
        int low = lower_bound(all(v2), l[i])-v2.begin();
        int high = upper_bound(all(v1), r[i])-v1.begin();
        ans = max(ans, high-low);
    }

    print(n-ans);
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
