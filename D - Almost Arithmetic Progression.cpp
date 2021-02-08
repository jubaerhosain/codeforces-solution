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
#define add                     push_back
#define endl                    '\n'
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
    int n;
    cin >> n;
    
    vector<int> v(n);
    scan_array(v, n);

    if(n <= 2) {
        print(0);
        return;
    }

    int ans = inf;
    int d[] = {-1, 0, 1};
    for(int i: d) {
        for(int j: d) {
            int a0 = v[0]+i;
            int a1 = v[1]+j;
            int count = abs(i)+abs(j);
            int diff = a1-a0;
            int prev = a1;

            rep(k, 2, n) {
                int next = diff+prev;
                if(abs(next-v[k]) == 1) {
                    count++;
                } else if(abs(next-v[k]) > 1) {
                    count = inf;
                    break;
                }
                prev = next;
            }

            ans = min(ans, count);
        }
    }

    cout << (ans==inf?-1:ans) << endl;
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
