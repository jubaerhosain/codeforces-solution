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
const ll inf = INT_MAX;
const int N = 2e5+10;
const int p = 1e9+7;

/*************User defined function*************/
void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> deg(n+1, 0);
    rep(i, 0, m) {
        int x, y;
        cin >> x >> y;
        deg[x]++;
        deg[y]++;
    }

    int mx = -1;
    int a = 0, b = 0;
    rep(i, 1, n+1) {
        if(deg[i] == 1) a++;
        else if(deg[i] == 2) b++;
        mx = max(mx, deg[i]);
    }

    if(mx == n-1 && m == n-1) print("star topology");
    else if(b == n && m == n) print("ring topology");
    else if(b == n-2 && a == 2 && m == n-1) print("bus topology");
    else print("unknown topology");
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
    //cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
