#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define pqueue                  priority_queue
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define out(a, b)               cout << a << " " << b << endl
#define rep(i, s, n)            for(int i = s; i < n; i++)
#define rrep(i, n, s)           for(int i = n; i >= s; i--)
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pii;
typedef vector<vector<int>> vii;
const ll inf = INT_MAX;
const int N = 5e2+5;
const int p = 1e9+7;

/*************User defined function*************/
void solve() {
    int n;
    cin >> n;

    vector<ll> ans(n, 0);
    vector<int> u(n), s(n);
    rep(i, 0, n) cin >> u[i];
    rep(i, 0, n) cin >> s[i];

    map<int, vector<ll>> map;
    rep(i, 0, n) map[u[i]].push_back(s[i]);
    
    for(auto p: map) {
        auto v = p.second;
        sort(all(v), greater<>());
        rep(i, 1, v.size()) v[i] += v[i-1];
        rep(k, 1, v.size()+1) {
            int cnt = v.size()/k;
            int inx = cnt*k-1;
            ans[k-1] += v[inx];
        }
    }
    
    for(auto i: ans) cout << i << " ";
    cout << endl;
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
    cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
