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
const int N = 50+5;
char a[N][N];
bool used[N][N];

int n, m;
int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

bool valid(int i, int j) {
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void solve() {
    cin >> n >> m;

    rep(i, 0, n) rep(j, 0, m) {
        cin >> a[i][j];
        used[i][j] = false;
    }

    rep(i, 0, n) rep(j, 0, m) {
        if(a[i][j] == 'B') {
            rep(k, 0, 4) {
                int x = i + dir[k][0];
                int y = j + dir[k][1];
                if(valid(x, y) && a[x][y] == '.')
                    a[x][y] = '#';
            }
        }
    }

    queue<pii> q;
    if(a[n-1][m-1] == '.') {
        q.push({n-1, m-1});
        used[n-1][m-1] = true; 
    }
    
    while(!q.empty()) {
        auto u = q.front();
        q.pop();
        rep(k, 0, 4) {
            int x = u.first + dir[k][0];
            int y = u.second + dir[k][1];
            if(valid(x, y) && !used[x][y] && a[x][y] != '#') {
                q.push({x, y});
                used[x][y] = true;
            }
        }
    }

    bool flag = true;
    rep(i, 0, n) rep(j, 0, m) {
        if((a[i][j] == 'G' && !used[i][j]) ||
        (a[i][j] == 'B' && used[i][j])) {
            flag = false;
            break;
        }
        if(!flag) break;
    }

    if(flag) print("YES");
    else print("NO");
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
