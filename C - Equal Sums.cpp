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
    int k; 
    cin >> k;

    set<pair<int, pair<int, int>>> st;
    rep(i, 1, k+1) {
        int n, sum = 0; cin >> n;
        vector<int> v(n);
        rep(j, 0, n) cin >> v[j], sum += v[j];  
        rep(j, 0, n) st.insert({sum-v[j],{i, j+1}});      
    }

    pair<int, pair<int, int>> prev = *(st.begin());
    for(auto curr: st) {
        if(curr == *(st.begin())) continue;
        if(prev.first == curr.first && prev.second.first != curr.second.first) {
            print("YES");
            cout << prev.second.first << " " << prev.second.second << endl;
            cout << curr.second.first << " " << curr.second.second << endl;
            return;
        }
        prev = curr;
    }

    print("NO");
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
