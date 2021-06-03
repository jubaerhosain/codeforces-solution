#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define out(a, b, c)            cout << a << " " << b << " " << c << endl
#define rep(i, s, n)            for(int i = s; i < n; i++)
#define rrep(i, n, s)           for(int i = n; i >= s; i--)
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;

/*************User defined function*************/
const ll inf = 1e18;
const int N = 2e5+5;

vector<int> g[N];

ld dfs(int u, int p) {
    ld sum = 0;

    for(auto v: g[u]) {
        if(v != p) {
            sum += 1 + dfs(v, u);
        }
    }

    return sum == 0 ? 0 : sum / (g[u].size() - (u != 1)); 
}

void solve() {
    int n;
    cin >> n;

    rep(i, 0, n-1) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    print(dfs(1, 0));
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
