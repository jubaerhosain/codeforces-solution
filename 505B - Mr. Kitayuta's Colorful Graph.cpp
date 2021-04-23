#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define pqueue                  priority_queue
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define out(a, b)               cout << a << " " << b << endl;
#define rep(i, s, n)            for(int i = s; i < n; i++)
#define rrep(i, n, s)           for(int i = n; i >= s; i--)
typedef long long int ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<vector<bool>> vii;
const ll inf = INT_MAX;
const int N = 2e5+10;
const int p = 1e9+7;

/*************User defined function*************/
vector<pii> g[105];
vector<bool> used(105), cvis(105);
int cnt;

void dfs(int u, int end, int c) {
    used[u] = true;
    
    if(u == end) {
        cnt++;
        return;
    }

    for(auto v: g[u]) {
        if(!used[v.first] && v.second == c) {
            dfs(v.first, end, c);
        }
    }
}

void solve() {
    int n, m;
    cin >> n >> m;

    rep(i, 0, m) {
        int x, y, c;
        cin >> x >> y >> c;
        g[x].push_back({y, c});
        g[y].push_back({x, c});
    }

    int q;
    cin >> q;
    rep(i, 0, q) {
        int x, y;
        cin >> x >> y;

        cnt = 0;
        fill(all(cvis), false);
        for(auto p: g[x]) {
            fill(all(used), false);
            if(!cvis[p.second]) {
                dfs(x, y, p.second);
                cvis[p.second] = true;
            }
        }

        print(cnt);
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
    cout << setprecision(12);

    int test = 1;
    //cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
