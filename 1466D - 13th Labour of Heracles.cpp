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
typedef pair<ll, ll> pii;

/*************User defined function*************/
const ll inf = 1e18;
const int N = 2e2+5;

void solve() {
    int n;
    cin >> n;

    ll curr = 0;
    vector<int> w(n+1); 
    rep(i, 1, n+1) {
        cin >> w[i]; 
        curr += w[i];
    }

    vector<int> deg(n+1, 0);
    rep(i, 0, n-1) {
        int u, v;
        cin >> u >> v;
        deg[u]++;
        deg[v]++;
    }

    priority_queue<pii> q;
    rep(i, 1, n+1) {
        q.push({w[i], deg[i]});
    }

    cout << curr << " ";
    rep(i, 1, n-1) {
        while(!q.empty() && q.top().second < 2) q.pop();
        if(!q.empty()) {
            auto it = q.top();
            q.pop();
            curr += it.first;
            if(it.second > 2) q.push({it.first, it.second-1});
        }
        cout << curr << " ";
    }

    print("");
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
