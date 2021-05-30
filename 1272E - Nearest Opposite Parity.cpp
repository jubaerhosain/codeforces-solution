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
const int inf = 1e9;
const int N = 2e5+5;
vector<int> g[N];
vector<int> ans;

void bfs(vector<int> &start, vector<int> &end) {
    vector<int> d(N, inf);
    queue<int> q;

    for(auto u: start) {
        q.push(u);
        d[u] = 0;
    }

    while(!q.empty()) {
        int u = q.front();
        q.pop();
        for(auto v: g[u]) {
            if(d[v] == inf) {
                q.push(v);
                d[v] = 1 + d[u];
            }
        }
    }

    for(auto u: end) {
        if(d[u] != inf) ans[u] = d[u];
    }
}

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> odd, even;
    rep(i, 0, n) {
        cin >> a[i];
        if(a[i] & 1) odd.push_back(i);
        else even.push_back(i);
    }

    rep(i, 0, n) {
        int l = i - a[i];
        int r = i + a[i];
        if(l >= 0 && l < n) g[l].push_back(i);
        if(r >= 0 && r < n) g[r].push_back(i);
    }

    ans = vector<int>(n, -1);
    bfs(even, odd);
    bfs(odd, even);

    for(auto i: ans) cout << i << " ";
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
