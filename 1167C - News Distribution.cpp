#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define pqueue                  priority_queue
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define rep(i, s, n)            for(int i = s; i < n; i++)
#define rrep(i, n, s)           for(int i = n; i >= s; i--)
typedef long long int ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<vector<int>> vii;
const ll inf = 1e9;
const int N = 2e5+5;

/*************User defined function*************/
void out(int a, int b) {
    cout << a << " " << b << endl;
}

vector<int> grp;
vector<bool> used;
map<int, vector<int>> g;

void dfs(int u) {
    grp.push_back(u);
    used[u] = true;
    for(int v: g[u]) {
        if(!used[v]) {
            dfs(v);
        }
    }
}

void solve() {
    int n, m;
    cin >> n >> m;

    used.resize(n+1, false);
    while(m--) {
        int k;
        cin >> k;
        vector<int> v(k);
        rep(i, 0, k) cin >> v[i];
        rep(i, 1, k) {
            int x = v[i-1], y = v[i];
            g[x].push_back(y);
            g[y].push_back(x);
        }
    }

    vector<int> ans(n+1, 1);
    rep(i, 1, n+1) {
        if(used[i]) continue;

        grp.clear();
        dfs(i);
        for(int u: grp) ans[u] = grp.size();
    }

    rep(i, 1, n+1) cout << ans[i] << " ";
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
    cout << setprecision(9);

    int test = 1;
    //cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
