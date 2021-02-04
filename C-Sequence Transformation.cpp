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
#define print_array(arr)        for(int val: arr) cout << val << " ";
#define print(var)              cout << var << endl
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
const int inf = INT_MAX;

/*************User defined function*************/
void solve() {
    int n; cin >> n;
    
    int last = -1;
    vector<int> cnt(n+1, 0), indx(n+1), ans(n+1, 0);
    rep(i, 1, n+1) {
        int x; cin >> x;
        if(cnt[x] != 0) {
            if(indx[x] != i-1) ans[x]++;
        } else if(cnt[x] == 0 && i > 1) {
            ans[x] = 1;
        }
        cnt[x]++; indx[x] = i;
        last = x;
    }

    int res = inf;
    rep(i, 1, n+1) {
        if(i != last) ans[i]++;
        if(cnt[i] > 0) res = min(res, ans[i]);
    }

    print(res);
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
