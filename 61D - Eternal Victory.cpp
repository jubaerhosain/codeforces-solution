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
const ll inf = 1e16;
const int N = 1e5+5;
int d[N];
bool used[N];
vector<pii> g[N];

void solve() {
    int n;
    cin >> n;

    ll sum = 0;
    rep(i, 0, n-1) {
        int x, y, w;
        cin >> x >> y >> w;
        sum += w;
        g[x].push_back({y, w});
        g[y].push_back({x, w});
    }

    sum *= 2;
    int mx = 0;
    queue<int> q;
    q.push(1);
    while(!q.empty()) {
        int u = q.front();
        q.pop();
        used[u] = true;
        for(auto v: g[u]) {
            if(!used[v.first]) {
                d[v.first] = v.second + d[u];
                q.push(v.first);
                mx = max(mx, d[v.first]);
            }
        }
    }
    
    sum -= mx;
    print(sum);
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
