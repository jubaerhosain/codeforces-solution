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
typedef vector<vector<int>> vii;
const ll inf = 1e9;
const int N = 2e5+5;

/*************User defined function*************/
vector<pii> a, b;
vector<string> g;

void dfs(int r, int c, int n, int cnt) {
    if(r < 0 || r >= n) return;
    else if(c < 0 || c >= n) return;
    else if(g[r][c] == '1') return;

    if(cnt == 1) a.push_back({r, c});
    else b.push_back({r, c});

    g[r][c] = '1';
    dfs(r, c+1, n, cnt);
    dfs(r, c-1, n, cnt);
    dfs(r+1, c, n, cnt);
    dfs(r-1, c, n, cnt);
}

void solve() {
    int n;
    cin >> n;

    int r1, c1;
    cin >> r1 >> c1;
    r1--, c1--;

    int r2, c2;
    cin >> r2 >> c2;
    r2--, c2--;

    g.resize(n);
    rep(i, 0, n) cin >> g[i];

    dfs(r1, c1, n, 1);
    dfs(r2, c2, n, 2);

    int ans = inf;
    for(auto i: a) {
        for(auto j: b) {
            int p = pow(abs(i.first-j.first), 2);
            int q = pow(abs(i.second-j.second), 2);
            ans = min(ans, p+q);
        }
    }

    if(ans == inf) print(0);
    else print(ans);

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
