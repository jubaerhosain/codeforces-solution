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
#define print(var)              cout << var << endl
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
const int p = 1e9+7;
const int eps = 1e-9;
const int inf = INT_MAX;
const int N = 1e5+5;

/*************User defined function*************/
void solve() {
    int n;
    cin >> n;

    map<int, int> mp;
    rep(i, 0, n) {
        int x; 
        cin >> x;
        mp[x]++;
    }

    int i = 0;
    int len = mp.size();
    vector<int> cnt(len);
    vector<ll> dp(len);
    for(auto p: mp) {
        cnt[i++] = p.second;
    }
    sort(all(cnt));
    rep(i, 0, len) {
        if(i == 0) {
            dp[i] = cnt[i];
        } else {
            dp[i] = dp[i-1]+cnt[i];
        }
    }
    
    ll mini = inf;
    rep(i, 0, len) {
        int low = lower_bound(all(cnt), cnt[i])-cnt.begin();
        if(low == 0) {
            ll curr = dp[len-1]-(cnt[i]*len);
            mini = min(mini, curr);
        } else {
            ll curr = dp[low-1];
            curr += (dp[len-1]-dp[low-1])-(cnt[i]*(len-low));
            mini = min(mini, curr);
        }
    }

    print(mini);
}

/*************main function*************/
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 

    int test;
    cin >> test;
    while(test-- > 0) {
        solve();
    }

    //solve();

    return 0;
}    
