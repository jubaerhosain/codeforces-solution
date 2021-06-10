#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define out(a, b)               cout << a << " " << b << endl
#define rep(i, s, n)            for(int i = s; i < n; i++)
#define rrep(i, n, s)           for(int i = n; i >= s; i--)
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;

/*************User defined function*************/
const int N = 2e5+5;
set<int> g[N];
int index_of[N];
vector<int> nodes;
int subtree_size[N];

int dfs(int u) {
    int size = 1;
    index_of[u] = nodes.size();
    nodes.push_back(u);
    for(int v: g[u]) 
        size += dfs(v);

    subtree_size[u] = size;
    return size;
}

void solve() {
    int n, q;
    cin >> n >> q;

    rep(i, 2, n+1) {
        int p;
        cin >> p;
        g[p].insert(i);
    }

    dfs(1);

    while(q--) {
        int u, k;
        cin >> u >> k;
        int inx = index_of[u] + k - 1;
        if(k <= subtree_size[u]) print(nodes[inx]);
        else print(-1);
    }
    
} 

/*************main function*************/
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 

    cout << fixed << showpoint;
    cout << setprecision(16);

    int test = 1;
    //cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
