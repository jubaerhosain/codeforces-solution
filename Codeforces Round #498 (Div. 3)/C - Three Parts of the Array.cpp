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
vector<int> inx[N];

void solve() {
    int n;
    cin >> n;
    
    vector<ll> v(n), pre(n, 0);
    rep(i, 0, n) {
        cin >> v[i];
        pre[i] = v[i];
        if(i > 0) pre[i] += pre[i-1];
    }

    ll ans = 0, sum = 0;
    rrep(i, n-1, 0)  {
        pre.pop_back();
        sum += v[i];
        if(binary_search(all(pre), sum)) ans = sum;
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
