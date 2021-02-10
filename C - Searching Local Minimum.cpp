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
#define pb                      push_back
//#define endl                    '\n'
#define println                 cout << endl;
#define scan_array(arr, n)      for(int i = 0; i < n; i++) cin >> arr[i];
#define print_array(arr)        for(auto val: arr) cout << val << " ";
#define print(var)              cout << var << endl
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
const int eps = 1e-9;
const int inf = INT_MAX;

/*************User defined function*************/
void solve() {
    int n; cin >> n;

    vector<int> v(n+2, 0);
    v[0] = v[n+1] = inf;
    int l = 1, r = n;
    fflush(stdout) ;
    while(l <= r) {
        int mid = (r-l)/2+l;
        if(v[mid] == 0) {
            cout.flush() << "? " << mid << endl;
            cin >> v[mid];
        }
        if(v[mid-1] == 0) {
            cout.flush() << "? " << mid-1 << endl;
            cin >> v[mid-1];
        }
        if(v[mid+1] == 0) {
            cout.flush() << "? " << mid+1 << endl;
            cin >> v[mid+1];
        }

        if(v[mid] < v[mid-1] && v[mid] < v[mid+1]) {
            cout.flush() << "! " << mid << endl;
            return;
        }

        if(v[mid-1] < v[mid]) {
            r = mid-1;
        } else {
            l = mid+1;
        }
    } 
}

/*************main function*************/
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    #endif 

    // int test;
    // cin >> test;
    // while(test-- > 0) {
    //     solve();
    // }

    solve();

    return 0;
}    
