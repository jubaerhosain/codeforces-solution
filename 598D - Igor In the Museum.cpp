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
const int N = 1e3+5;
char g[N][N];
int cnt[N][N];

int n, m, k;
int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

bool valid(int i, int j) {
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void bfs(int i, int j) {
    queue<pii> q;
    vector<pii> a;

    q.push({i, j});
    cnt[i][j] = 1;
    int num = 0;
    while(!q.empty()) {
        auto u = q.front();
        q.pop();
        a.push_back({u.first, u.second});
        rep(i, 0, 4) {
            int x = u.first + dir[i][0];
            int y = u.second + dir[i][1];
            if(valid(x, y) && cnt[x][y] == 0) {
                if(g[x][y] == '.') {
                    q.push({x, y});
                    cnt[x][y] = 1;
                } else {
                    num++;
                }
            }
        }
    }

    for(auto u: a) cnt[u.first][u.second] = num;
}

void solve() {
    cin >> n >> m >> k;

    rep(i, 0, n) rep(j, 0, m) cin >> g[i][j];

    rep(i, 0, k) {
        int x, y;
        cin >> x >> y;
        x--, y--;
        if(cnt[x][y] == 0) bfs(x, y);
        print(cnt[x][y]);
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
