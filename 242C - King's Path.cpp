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
const ll inf = 1e16;
const int N = 2e3+5;
map<pii, int> d;
int dir[8][2] = {{0,1}, {0,-1}, {1,0}, {-1,0}, {1,1}, {-1,-1}, {1,-1}, {-1,1}};


void solve() {
    int x0, y0, x1, y1;
    cin >> x0 >> y0 >> x1 >> y1;

    int n;
    cin >> n;
    rep(i, 0, n) {
        int r, x, y;
        cin >> r >> x >> y;
        rep(c, x, y+1) d[{r, c}] = -1;
    }

    queue<pii> q;
    q.push({x0, y0});
    d[{x0, y0}] = 0;
    while(!q.empty()) {
        auto p = q.front();
        q.pop();
        rep(k, 0, 8) {
            int x = p.first + dir[k][0];
            int y = p.second + dir[k][1];
            if(d[{x, y}] == -1) {
                d[{x, y}] = 1 + d[p];
                q.push({x, y});
            }
        }
    }

    int ans = d[{x1, y1}];
    print(ans);
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
