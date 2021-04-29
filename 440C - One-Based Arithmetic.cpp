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
ll a[20];

ll get_min(ll n, int i) {
    ll cnt = n/a[i];
    n %= a[i];
    if(n == 0) return cnt*i;
    return cnt*i+min(get_min(n, i-1), i+get_min(a[i]-n, i-1));
}

void solve() {
    ll n;
    cin >> n;

    a[1] = 1;
    rep(i, 2, 17) {
        a[i] = a[i-1]*10+1;
    }

    print(get_min(n, 16));
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
