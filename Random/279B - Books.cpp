#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define pqueue                  priority_queue
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define print_array(v, s, n)    for(ll i = s; i < n; i++) { cout << v[i] << " "; } cout << endl
#define rep(i, s, n)            for(ll i = s; i < n; i++)
#define rrep(i, n, s)           for(ll i = n; i >= s; i--)
typedef long long int ll;
const int inf = INT_MAX;
const int N = 2e5+5;

/*************User defined function*************/
void solve() {
    int n, t;
    cin >> n >> t;

    vector<int> v(n);
    rep(i, 0, n) cin >> v[i];

    int ans = 0;
    int a = 0, b, sum = 0;
    for(b = 0; b < n; b++) {
        sum += v[b];
        if(sum > t) {
            sum -= v[a];
            a++;
        }
        ans = max(ans, b-a);
    }
    
    print(max(ans, b-a));
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
