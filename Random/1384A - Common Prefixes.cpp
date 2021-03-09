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
    int n;
    cin >> n;
   
    vector<int> a(n+1, 0);
    rep(i, 1, n+1) cin >> a[i];

    vector<string> ans(n+1);
    rep(i, 0, 51) ans[0].push_back('a');
    rep(i, 1, n+1) {
        rep(j, 0, a[i]) ans[i].push_back(ans[i-1][j]);
        if(ans[i-1][a[i]] == 'a') rep(j, a[i], 51) ans[i].push_back('b');
        else rep(j, a[i], 51) ans[i].push_back('a');
    }

    for(string &s: ans) print(s);
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
