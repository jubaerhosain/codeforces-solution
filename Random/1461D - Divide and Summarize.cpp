#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define pqueue                  priority_queue
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define rep(i, s, n)            for(ll i = s; i < n; i++)
#define rrep(i, n, s)           for(ll i = n; i >= s; i--)
typedef long long int ll;
typedef long double ld;
typedef pair<int, int> pii;
const int inf = INT_MAX;
const int N = 2e5+5;

/*************User defined function*************/
set<ll> st;
vector<ll> v, dp;

void dfs(int l, int r) {
    if(l > r) return;

    ll sum = 0;
    if(l == 0) sum = dp[r];
    else sum = dp[r] - dp[l-1];
    st.insert(sum);

    if(l == r) return;

    ll mid = (v[l]+v[r])/2;
    int pos = upper_bound(all(v), mid) -  v.begin();

    if(pos == r+1) return;
    dfs(l, pos-1);
    dfs(pos, r);
}

void solve() {
    int n, q;
    cin >> n >> q;

    v.resize(n), dp.resize(n);
    rep(i, 0, n) {
        cin >> v[i];
    }

    sort(all(v));
    rep(i, 0, n) {
        dp[i] = v[i];
        if(i > 0) dp[i] += dp[i-1];
    }

    // rep(i, 0, n) {
    //     cout << v[i] << " " << dp[i] << endl;
    // }

    dfs(0, n-1);

    while(q--) {
        ll s;
        cin >> s;
        if(st.count(s)) print("Yes");
        else print("No");
    }

    st.clear();
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
    cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
