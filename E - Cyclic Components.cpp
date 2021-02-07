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
const int N = 2e5+5;
vector<int> g[N];
bool visited[N];

void dfs(int u, vector<int> &comp) {
    visited[u] = true;
    comp.add(u);

    for(auto v: g[u]) {
        if(!visited[v]) {
            dfs(v, comp);
        }
    }
}

void solve() {
    int n, m;
    cin >> n >> m;

    rep(i, 0, m) {
        int u, v;
        cin >> u >> v;
        u--, v--;
        g[u].add(v);
        g[v].add(u);
    }

    int ans = 0;
    rep(i, 0, n) {
        if(!visited[i]) {
            vector<int> comp;
            dfs(i, comp);

            bool cycle = true;
            for(auto u: comp) {
                if(g[u].size() != 2){
                    cycle = false;
                    break;
                } 
            }

            if(cycle) ans++;
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

    // int test;
    // cin >> test;
    // while(test-- > 0) {
    //     solve();
    // }

    solve();

    return 0;
}    
