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
vector<pii> v;
vector<bool> used;

void dfs(int u, int n) {
    used[u] = true;
    rep(i, 0, n) {
        if(!used[i] && (v[u].first == v[i].first
        || v[u].second == v[i].second)) dfs(i, n);
    }
}

void solve() {
    int n;
    cin >> n;

    rep(i, 0, n) {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }

    int ans = 0;
    used.resize(n, false);
    rep(i, 0, n) {
        if(!used[i]) {
            dfs(i, n);
            ans++;
        }
    }

    print(ans-1);
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
