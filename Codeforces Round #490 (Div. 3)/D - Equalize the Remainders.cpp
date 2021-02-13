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
const int N = 2e5+10;

/*************User defined function*************/
vector<ull> a(N);
vector<pair<ull, int>> mod[N];

void solve() {
    int n, m;
    cin >> n >> m;

    rep(i, 0, n) {
        cin >> a[i];
        mod[a[i]%m].pub({a[i], i});
    }

    ull ans = 0;
    int k = n/m, lop = 2;
    vector<pair<ull, int>> fr;
    while(lop-- > 0) {
        rep(i, 0, m) {
            while(mod[i].size() > k) {
                fr.pub(mod[i].back());
                mod[i].pob();
            }

            while(mod[i].size() < k && !fr.empty()) {
                pair<ull, int> x = fr.back();
                fr.pob();
                mod[i].pub({-1,-1});
            
                int cm = x.first%m;
                int ci = x.second;
                if(cm < i) {
                    a[ci] += (i-cm);
                    ans += (i-cm);
                } else {
                    a[ci] += (m-cm+i);
                    ans += (m-cm+i);
                }
            }
        }
    }

    print(ans);
    print_array(a, n);
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
