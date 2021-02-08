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
    int n, k; cin >> n >> k;

    set<pair<int, int>> st;
    vector<int> v(n);
    rep(i, 0, n) {
        int x; cin >> v[i];
        st.insert({v[i], i});
    }

    int left = 0;
    pair<int, int> prev = {0,0};
    vector<int> ans(n, 0);
    for(auto p: st) {
        if(prev.first == p.first) ans[p.second] = ans[prev.second];
        else ans[p.second] = left;
        left++;
        prev.first = p.first;
        prev.second = p.second;
    }

    rep(i, 0, k) {
        int x, y; cin >> x >> y;
        x--, y--;
        if(v[x] > v[y]) ans[x]--;
        else if(v[x] < v[y]) ans[y]--;
    }
    
    print_array(ans);
}

/*************main function*************/
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 

    // int test;
    // cin >> test;
    // while(test-- > 0) {
    //     solve();
    // }

    solve();

    return 0;
}    
