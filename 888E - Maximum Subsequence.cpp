#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define pqueue                  priority_queue
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define out(a, b)               cout << a << " " << b << endl
#define rep(i, s, n)            for(int i = s; i < n; i++)
#define rrep(i, n, s)           for(int i = n; i >= s; i--)
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<vector<int>> vii;
const ll inf = INT_MAX;
const int p = 1e9+7;
const int N = 1e6+5;

/*************User defined function*************/
int n, m;
vector<int> a;
vector<int> x, y;

void subset_sum(int n, int s) {
    rep(i, 0, (1<<n)) {
        ll curr = 0;
        rep(j, 0, n) {
            if(i & (1<<j)) curr += a[s+j];
        }
        if(s == 0) x.push_back(curr%m);
        else y.push_back(curr%m);
    }
}


void solve() {
    n, m;
    cin >> n >> m;

    if(n == 1) {
        cin >> n;
        print(n%m);
        return;
    }

    a = vector<int>(n);
    rep(i, 0, n) cin >> a[i];

    subset_sum(n/2, 0);
    subset_sum(n-n/2, n/2);

    sort(all(y));

    int mx = 0;
    rep(i, 0, x.size()) {
        if(m < x[i]) continue;
        int inx = upper_bound(all(y), m-x[i]-1) - y.begin() - 1;
        int modsum = (x[i]%m + y[inx]%m) % m;
        if(modsum > mx) mx = modsum;
    }

    print(mx);
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
