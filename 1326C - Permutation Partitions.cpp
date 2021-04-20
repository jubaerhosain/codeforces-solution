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
    int n, k;
    cin >> n >> k;

    map<int, int> mp;
    rep(i, 0, n) {
        int x;
        cin >> x;
        mp[x] = i;
    }

    ll sum = 0;
    vector<ll> inx;
    rep(i, 0, k) {
        sum += n;
        inx.push_back(mp[n]);
        n--;
    }

    sort(all(inx));

    ll ans = 1;
    if(inx.size() > 1) {
        rep(i, 1, inx.size()) {
            ll diff = inx[i] - inx[i-1];
            ans = (ans*diff)%998244353;
        }
    }

    out(sum, ans);
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
