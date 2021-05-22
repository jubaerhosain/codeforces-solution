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
typedef vector<vector<int>> vii;

/*************User defined function*************/
const int inf = 1e9;
const int N = 2e5+5;
set<int> g[N];
bool used[N];

void solve() {
    int n;
    cin >> n;

    rep(i, 0, n-1) {
        int u, v;
        cin >> u >> v;
        g[u].insert(v);
        g[v].insert(u);
    }

    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];

    if(a[0] != 1) {
        print("NO");
        return;
    }
 
    used[a[0]] = true;
    int parent = 0, curr = 1;
    while(curr < n) {
        int u = a[parent];
        int size = 0;
        for(auto v: g[u]) if(!used[v]) size++;
        rep(i, 0, size) {
            int v = a[curr];
            if(!g[u].count(v)) {
                print("NO");
                return;
            }
            used[v] = true;
            curr++;
        }
        parent++;
    }

    print("YES");
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
