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
const int N = 5e2+5;
const int p = 1e9+7;

/*************User defined function*************/
int cnt;
int b[N][N];

void dfs(int i, int j, int x, int n) {
    if(j < 0 || i >= n || 
    cnt >= x || b[i][j] != -1) return;
    
    cnt++;
    b[i][j] = x;
    dfs(i, j-1, x, n);
    dfs(i+1, j, x, n);
}

void solve() {
    int n;
    cin >> n;

    rep(i, 0, n) 
    rep(j, 0, n)
    b[i][j] = -1;

    vector<int> dia(n);
    rep(i, 0, n) cin >> dia[i];

    rep(i, 0, n) {
        cnt = 0;
        dfs(i, i, dia[i], n);
    }

    rep(i, 0, n) {
        rep(j, 0, i+1) cout << b[i][j] << " ";
        print("");
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
