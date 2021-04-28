#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define pqueue                  priority_queue
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define out(a, b)               cout << a << " " << b << endl;
#define rep(i, s, n)            for(int i = s; i < n; i++)
#define rrep(i, n, s)           for(int i = n; i >= s; i--)
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pii;
typedef vector<vector<int>> vii;
const ll inf = INT_MAX;
const int N = 5e2+5;
const int p = 1e9+7;

/*************User defined function*************/
ll kadens(vector<int> v) {
    ll curr = 0, mx = 0;

    rep(i, 0, v.size()) {
        curr = max((ll)v[i], curr+v[i]);
        mx = max(mx, curr);
    }
    
    return mx;
}

void solve() {
    int n;
    cin >> n;

    ll sum = 0;
    vector<int> a(n);
    rep(i, 0, n) {
        cin >> a[i];
        if(i%2 == 0) sum += a[i];
    }

    vector<int> v1, v2;
    for(int i = 1; i < n; i += 2) v1.push_back(a[i]-a[i-1]);
    for(int i = 2; i < n; i += 2) v2.push_back(a[i-1]-a[i]);

    ll mx = max(kadens(v1), kadens(v2));

    if(mx > 0) sum += mx;

    print(sum);
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
