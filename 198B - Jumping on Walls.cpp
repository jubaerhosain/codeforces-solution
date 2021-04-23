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
const int N = 1e5+10;
const int p = 1e9+7;

/*************User defined function*************/
bool used[2][N];
string g[2];
bool flag = false;
int n, k;


void dfs(int u, int t, int r) {
    if(flag || t >= u || 
    used[r][u] || g[r][u] == 'X') return;

    if(u > n-k) {
        flag = true;
        return;
    }

    used[r][u] = true;
    dfs(u+k, t+1, !r);
    dfs(u+1, t+1, r);
    dfs(u-1, t+1, r);
}

void solve() {
    cin >> n >> k;

    rep(i, 0, 2) cin >> g[i];
    dfs(0, -1, 0);

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
    //cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
