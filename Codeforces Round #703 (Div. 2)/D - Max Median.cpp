#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define rall(v)                 v.rbegin(), v.rend()
#define des()                   greater<int>()
#define rep(i, a, n)            for(int i = a; i < n; i++)  
#define rrep(i, n, a)           for(int i = n; i >= a; i--)
#define pqueue                  priority_queue
#define umap                    unordered_map
#define uset                    unordered_set
#define pub                     push_back
#define pob                     pop_back  
#define endl                    '\n' //in interactive problem should not use this
#define println                 cout << endl
#define scan_array(arr, n)      for(int i = 0; i < n; i++) { cin >> arr[i]; }
#define print_array(arr, n)     for(int i = 0; i < n; i++) { cout << arr[i] << " "; } println;
#define print(var)              cout << var << endl;
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
typedef pair<int, int> pii;
const int p = 1e9+7;
const int eps = 1e-9;
const int inf = INT_MAX;
const int N = 1e5+5;

/*************User defined function*************/
void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n+1);
    rep(i, 1, n+1) cin >> v[i];

    int low = 1, high = n, ans = 0;
    while(low <= high) {
        int mid = low+(high-low)/2;
        vector<int> dp(n+1, 0);
        rep(i, 1, n+1) {
            if(v[i] >= mid) dp[i] = 1;
            else dp[i] = -1;
            dp[i] += dp[i-1];
        }

        int mini = inf, flag = 0;
        rep(i, k, n+1) {
            mini = min(mini, dp[i-k]);
            if(dp[i]-mini > 0) {
                flag = 1;
                break;
            }
        }

        if(flag) {
            ans = mid;
            low = mid+1;
        } else {
            high = mid-1;
        }
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

    int test = 1;
    //cin >> test;
    while(test-- > 0) {
        solve();
    }

    return 0;
}    
