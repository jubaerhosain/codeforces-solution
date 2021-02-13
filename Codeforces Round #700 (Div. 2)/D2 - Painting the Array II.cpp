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
#define add                     push_back
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
vector<int> nxt(N, N), pos(N, N);
void solve() {
    int n;
    cin >> n;

    vector<int> a(n+1);
    rep(i, 1, n+1) cin >> a[i];
    rrep(i, n, 1) {
        nxt[i] = pos[a[i]];
        pos[a[i]] = i;
    }

    int x = 0, y = 0, ans = 0;
    rep(k, 1, n+1) {
        if(a[x] == a[k]) {
            x = k;
        } else if(a[y] == a[k]) {
            y = k;
        } else if(nxt[x] > nxt[y]) {
            ans += 1;
            x = k;
        } else {
            ans += 1;
            y = k;
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

    // int test;
    // cin >> test;
    // while(test-- > 0) {
    //     solve();
    // }

    solve();

    return 0;
}    
