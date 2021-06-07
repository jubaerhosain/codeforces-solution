#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define out(a, b)               cout << a << " " << b << endl
#define rep(i, s, n)            for(int i = s; i < n; i++)
#define rrep(i, n, s)           for(int i = n; i >= s; i--)
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;

/*************User defined function*************/
const int N = 1e5+5;
int deg[N], s[N];

void solve() {
    int n;
    cin >> n;

    int sum = 0;
    queue<int> q;
    rep(i, 0, n) {
        cin >> deg[i] >> s[i];
        sum += deg[i];
        if(deg[i] == 1) q.push(i);
    }

    print(sum/2);
    while(!q.empty()) {
        int u = q.front();
        q.pop();
        if(deg[u] == 0) continue;
        int v = s[u];
        s[v] ^= u;
        deg[v]--;
        if(deg[v] == 1) q.push(v);
        out(u, v);
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
    cout << setprecision(16);

    int test = 1;
    //cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
