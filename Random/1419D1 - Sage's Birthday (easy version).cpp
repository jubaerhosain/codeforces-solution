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
const int N = 2e3+5;

/*************User defined function*************/
void solve() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    rep(i, 0, n) cin >> v[i];

    sort(all(v));
    
    int cnt = 0;
    vector<int> ans(n);
    if(n&1) {
        cnt = n/2;
        for(int i = 0, j = cnt; i < n; i += 2, j++) {
            ans[i] = v[j];
        }
        for(int i = 1, j = 0; i < n; i += 2, j++) {
            ans[i] = v[j];
        }
    } else {
        cnt = n/2 - 1;
        for(int i = 0, j = cnt; i < n-1; i += 2, j++) {
            ans[i] = v[j];
        }
        for(int i = 1, j = 0; i < n-1; i += 2, j++) {
            ans[i] = v[j];
        }
        ans[n-1] = v[n-1];
    }

    print(cnt);
    for(int i: ans) cout << i << " ";
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
