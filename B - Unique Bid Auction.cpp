#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define rall(v)                 v.rbegin(), v.rend()
#define des()                   greater<>()
#define rep(i, a, n)            for(int i = a; i < n; i++)
#define rrep(i, n, a)           for(int i = n; i >= a; i--)
#define umap                    unordered_map
#define uset                    unordered_set
#define add                     push_back
#define endl                    '\n'
#define println                 cout << endl;
#define scan_array(arr, n)      for(int i = 0; i < n; i++) cin >> arr[i];
#define print_array(arr)        for(int val: arr) cout << val << " ";
#define print(var)              cout << var << endl
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
const int inf = INT_MAX;

/*************User defined function*************/
void solve() {
    int n; 
    cin >> n;
    
    vector<int> cnt(n+1), indx(n+1);
    rep(i, 1, n+1) {
        int x; cin >> x;
        cnt[x]++; indx[x] = i;
    }

    int ans = -1;
    rep(i, 1, n+1) {
        if(cnt[i] == 1) {
            ans = indx[i];
            break;
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

    int test;
    cin >> test;
    while(test-- > 0) {
        solve();
    }
    return 0;
}    
