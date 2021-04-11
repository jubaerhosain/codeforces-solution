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
typedef vector<vector<int>> vii;
const ll inf = 1e9;
const int N = 2e5+5;

/*************User defined function*************/
void solve() {
    int n;
    cin >> n;

    vector<string> v(n);
    rep(i, 0, n) cin >> v[i];

    vector<pii> inx;
    rep(i, 0, n) {
        rep(j, 0, n) {
            if(v[i][j] == '*') inx.push_back({i, j});
        }
    }

    int r1 = inx[0].first, c1 = inx[0].second;
    int r2 = inx[1].first, c2 = inx[1].second;

    int a, b, x, y;
    if(r1 == r2) {
        b = c1, y = c2;
        a = (r1+1)%n, x = (r2+1)%n;
    } else if(c1 == c2) {
        a = r1, x = r2;
        b = (c1+1)%n, y = (c2+1)%n;
    } else {
        a = r1, b = c2;
        x = r2, y = c1;
    }

    v[a][b] = '*';
    v[x][y] = '*';

    rep(i, 0, n) print(v[i]);
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
    cout << setprecision(9);

    int test = 1;
    cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
