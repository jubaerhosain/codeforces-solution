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
    int n, w;
    cin >> n >> w;

    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];

    int mn = a[0], mx = a[0];
    rep(i, 1, n) {
        a[i] += a[i-1];
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
    }

    if(mx > w) {
        print(0);
        return;
    }

    int l, r;
    if(mn < 0) l = -mn;
    else l = 0;

    if(mx < 0) r = w;
    else r = w-mx;

    if(l > r) print(0);
    else print(r-l+1);
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
