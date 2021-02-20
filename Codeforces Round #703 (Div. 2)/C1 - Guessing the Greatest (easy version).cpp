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
#define nl                      '\n' //in interactive problem should not use this
#define println                 cout << endl
#define scan_array(arr, n)      for(int i = 0; i < n; i++) { cin >> arr[i]; }
#define print_array(arr, n)     for(int i = 0; i < n; i++) { cout << arr[i] << " "; } println;
#define print(var)              cout << var << endl
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
typedef pair<int, int> pii;
const int p = 1e9+7;
const int eps = 1e-9;
const int inf = INT_MAX;
const int N = 1e5+5;

/*************User defined function*************/
int ask(int l, int r) {
    if(l == r) return -1;
    cout.flush() << "? " << l << " " << r << endl;
    int x; cin >> x;
    return x;
}

void solve() {
    int n; 
    cin >> n;

    int pos = ask(1, n);
    if(ask(1, pos) == pos) {
        int l = 1, r = pos;
        while(l < r) {
            int mid = (l+r+1)/2;
            if(ask(mid, pos) == pos) {
                l = mid;
            } else {
                r = mid-1;
            }
        }
        cout.flush() << "! " << l << endl;
    } else {
        int l = pos, r  = n;
        while(l < r) {
            int mid = (l+r)/2;
            if(ask(pos, mid) == pos) {
                r = mid;
            } else {
                l = mid+1;
            }
        }
        cout.flush() << "! " << l << endl;
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
