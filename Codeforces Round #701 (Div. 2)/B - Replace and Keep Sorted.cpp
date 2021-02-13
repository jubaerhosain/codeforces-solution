#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define rall(v)                 v.rbegin(), v.rend()
#define des()                   greater<int>()
#define rep(i, a, n)            for(int i = a; i < n; i++)  
#define rrep(i, n, a)           for(int i = n; i >= a; i--)
#define bitcount(x)             __builtin_popcount(x)
#define bitcountll(x)           __builtin_popcountll(x)
#define pq                      priority_queue
#define umap                    unordered_map
#define uset                    unordered_set
#define pub                     push_back
#define pob                     pop_back  
#define endl                    '\n'    //in interactive problem should not use this
#define println                 cout << endl
#define scan_array(arr, n)      for(int i = 0; i < n; i++) { cin >> arr[i]; }
#define print_array(arr, n)     for(int i = 0; i < n; i++) { cout << arr[i] << " "; } println;
#define print(var)              cout << var << endl
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
const int eps = 1e-9;
const int inf = INT_MAX;
const int N = 1e5+10;

/*************User defined function*************/
vector<int> dp(N);
void solve() {
    int n, q, k;
    cin >> n >> q >> k;

    vector<int> a(n+1);
    rep(i, 1, n+1) cin >> a[i];

    dp[1] = a[2]-2;
    dp[n] = k-a[n-1]-1;
    rep(i, 2, n) {
        dp[i] = a[i+1]-a[i-1]-2;
        dp[i] += dp[i-1];
    }

    while(q-- > 0) {
        int x, y;
        cin >> x >> y;

        if(x == y) {
            print(k-1);
            continue;
        }

        int ans = 0;
        ans += a[x+1]-2;
        ans += k-a[y-1]-1;
        x++, y--;
        ans += (dp[y]-dp[x-1]);

        print(ans);
    }
}

/*************main function*************/
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 

    // int test;
    // cin >> test;
    // while(test-- > 0) {
    //     solve();
    // }

    solve();

    return 0;
}    
