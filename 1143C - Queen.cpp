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

set<int> ans;
vector<int> c;
vector<bool> used;
map<int, vector<int>> g;

void dfs(int u) {
    if(u != -1 && c[u] == 1) {
        bool flag = true;
        for(int v: g[u]) {
            if(c[v] == 0) {
                flag = false;
                break;
            }
        }
        if(flag) ans.insert(u);
    }

    if(u != -1) used[u] = true;
    for(int v: g[u]) {
        if(!used[v]) dfs(v);
    }
}

void solve() {
    int n;
    cin >> n;

    c.resize(n+1);
    used.resize(n+1, false);
    rep(i, 1, n+1) {
        int x, y;
        cin >> x >> y;
        g[x].push_back(i);
        c[i] = y;
    }

    // for(auto p: g) {
    //     cout << p.first << "->";
    //     for(int i: p.second) cout << i << " ";
    //     cout << endl;
    // }

    dfs(-1);

    if(ans.size() == 0) {
        print(-1);
    }

    for(int i: ans) cout << i << " ";
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
