#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define pqueue                  priority_queue
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define rep(i, s, n)            for(int i = s; i < n; i++)
#define rrep(i, n, s)           for(int i = n; i >= s; i--)
typedef long long int ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const int inf = INT_MAX;
const int N = 4e3+5;

/*************User defined function*************/
void solve() {
    string ss;
    cin >> ss;

    string ws;
    int w = 0, o = 0;
    rep(i, 0, ss.size()) {
        if(ss[i] == 'v') {
            w++;
            rep(j, 0, o) ws.push_back('o');
            o = 0;
        } else {
            o++;
            rep(j, 1, w) ws.push_back('w');
            w = 0;
        }
    }

    rep(j, 0, o) ws.push_back('o');
    rep(j, 1, w) ws.push_back('w');

    int n = ws.size();
    vector<int> pre(n, 0), suff(n, 0);
    rep(i, 0, n) {
        if(ws[i] == 'w') pre[i] = 1;
        if(i > 0) pre[i] += pre[i-1];
    }

    rrep(i, n-1, 0) {
        if(ws[i] == 'w') suff[i] = 1;
        if(i < n-1) suff[i] += suff[i+1];
    }

    ll ans = 0;
    rep(i, 1, n-1) {
        if(ws[i] == 'o') ans += ((ll)pre[i-1] * (ll)suff[i+1]);
    }

    print(ans);
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
