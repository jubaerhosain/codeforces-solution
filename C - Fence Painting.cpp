#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define rall(v)                 v.rbegin(), v.rend()
#define des()                   greater<>()
#define rep(i, a, n)            for(int i = a; i < n; i++)  
#define rrep(i, n, a)           for(int i = n; i >= a; i--)
#define bitcount(x)             __builtin_popcount(x)
#define bitcountll(x)           __builtin_popcountll(x)
#define umap                    unordered_map
#define uset                    unordered_set
#define pub                     push_back
#define pob                     pop_back  
#define endl                    '\n'    //in interactive problem should not use this
#define println                 cout << endl
#define scan_array(arr, n)      for(int i = 0; i < n; i++) { cin >> arr[i]; }
#define print_array(arr, n)     for(int i = 0; i < n; i++) { if(i) cout << " "; cout << arr[i]; } println;
#define print(var)              cout << var << endl
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
const int eps = 1e-9;
const int inf = INT_MAX;
const int N = 1e5+5;

/*************User defined function*************/
vector<vector<int>> v(N);
vector<int> a(N), b(N), c(N), ans(N);
void solve() {
    int n, m;
    cin >> n >> m;

    rep(i, 1, n+1) v[i].clear();
    scan_array(a, n);
    rep(i, 0, n) {
        cin >> b[i];
        if(a[i] != b[i]) v[b[i]].pub(i);
    }
    scan_array(c, m);

    int last = -1;
    if(v[c[m-1]].size() > 0) {
        last = v[c[m-1]].back();
        v[c[m-1]].pob();
    } else {
        rep(i, 0, n) {
            if(b[i] == c[m-1]) {
                last = i;
                break;
            }
        }
    }

    if(last == -1) {
        print("NO");
        return;
    }

    ans[m-1] = last+1;
    rep(i, 0, m-1) {
        if(v[c[i]].size() == 0) {
            ans[i] = last+1;
        } else {
            ans[i] = v[c[i]].back()+1;
            v[c[i]].pob();
        }
    }

    rep(i, 0, n) {
        if(v[b[i]].size() > 0) {
            print("NO");
            return;
        }
    }

    print("YES");
    print_array(ans, m);
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
