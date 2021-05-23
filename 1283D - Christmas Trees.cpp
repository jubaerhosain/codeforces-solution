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

void solve() {
    int n, m;
    cin >> n >> m;

    queue<int> q;
    set<int> used;
    map<int, int> d;
    rep(i, 0, n) {
        int x;
        cin >> x;
        q.push(x);
        used.insert(x);
        d[x] = 0;
    }

    ll sum = 0;
    vector<int> ans;
    while(!q.empty()) {
        if(ans.size() == m) break;
        int u = q.front();
        q.pop();
        if(d[u] > 0) {
            sum += d[u];
            ans.push_back(u);
        }
        if(!used.count(u-1)) {
            d[u-1] = 1 + d[u];
            used.insert(u-1);
            q.push(u-1);
        } 
        if(!used.count(u+1)) {
            d[u+1] = 1 + d[u];
            used.insert(u+1);
            q.push(u+1);
        }
    }

    print(sum);
    for(auto i: ans) cout << i << ' ';
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
