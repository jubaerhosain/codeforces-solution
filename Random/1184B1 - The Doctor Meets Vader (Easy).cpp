#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define des()                   greater<int>()
#define rep(i, a, n)            for(ll i = a; i <= n; i++)  
#define rrep(i, n, a)           for(ll i = n; i >= a; i--)
#define pqueue                  priority_queue
#define pub                     push_back
#define pob                     pop_back  
#define endl                    '\n' //in interactive problem should not use this
#define scan_array(v, a, n)     for(ll i = a; i <= n; i++) { cin >> v[i]; }
#define print_array(v, a, n)    for(ll i = a; i <= n; i++) { cout << v[i] << " "; } cout << endl;
#define print(var)              cout << var << endl;
typedef long long int ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<vector<int>> vii;
const double pi = 3.141592653589793;
const int inf = INT_MAX;
const int N = 2e5+5;

struct compare { 
    bool operator()(const pii& value,  
        const int& key) { 
        return (value.first < key); 
    } 
    bool operator()(const int& key,  
        const pii& value) { 
        return (key < value.first); 
    } 
}; 

/*************User defined function*************/
void solve() {
    int s, b;
    cin >> s >> b;

    vector<int> ap(s);
    scan_array(ap, 0, s-1);

    vector<pii> dp(b);
    rep(i, 0, b-1) {
        int x, y;
        cin >> x >> y;
        dp[i] = {x, y};
    }

    sort(all(dp));
    rep(i, 1, b-1) {
        dp[i].second += dp[i-1].second;
    }

    vector<int> ans(s);
    rep(i, 0, s-1) {
        int inx = upper_bound(all(dp), ap[i], compare()) - dp.begin();
        inx--;
        if(inx >= 0) ans[i] = dp[inx].second;
    }

    print_array(ans, 0, s-1);
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
    cout << setprecision(10);

    int test = 1;
    //cin >> test;
    while(test-- > 0) {
        solve();
    }

    return 0;
}    
