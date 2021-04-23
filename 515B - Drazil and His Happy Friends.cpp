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
void solve() {
    int n, m;
    cin >> n >> m;

    int x, y;
    vector<bool> b(n, false), g(m, false);
    
    cin >> x;
    rep(i, 0, x) {
        int inx;
        cin >> inx;
        b[inx] = true;
    }

    cin >> y;
    rep(i, 0, y) {
        int inx;
        cin >> inx;
        g[inx] = true;
    }

    rep(i, 0, (n+m)*m*n) {
        if(b[i%n]) g[i%m] = true;
        if(g[i%m]) b[i%n] = true;
    }

    if(count(all(b), true) == n && count(all(g), true) == m) {
        print("Yes");
    } else {
        print("No");
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
