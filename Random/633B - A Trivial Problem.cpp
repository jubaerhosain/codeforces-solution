#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define pqueue                  priority_queues
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define rep(i, s, n)            for(int i = s; i < n; i++)
#define rrep(i, n, s)           for(int i = n; i >= s; i--)
typedef long long int ll;
typedef long double ld;
typedef pair<int, int> pii;
const ll inf = 1e18;
const int N = 1e5+5;

/*************User defined function*************/
ll zeros(ll n) {
    ll ans = 0, p = 5;
    while(n/p > 0) {
        ans += (n/p);
        p *= 5;
    }
    return ans;
}

void solve() {
    ll m;
    cin  >> m;

    ll n = 1;
    vector<ll> ans;
    while(1) {
        ll cnt = zeros(n);
        if(cnt == m) ans.push_back(n);
        else if(cnt > m) break;
        n++;
    }

    print(ans.size());
    for(auto i: ans) cout << i << " ";
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
