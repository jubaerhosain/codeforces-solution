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

    ll sum = 0;
    vector<pair<int, int>> a;
    rep(i, 1, n+1) {
        int x; 
        cin >> x;
        a.pub({x, i});
        sum += x;
    }
    
    sort(all(a));

    vector<int> ans;
    ans.pub(a[n-1].second);
    sum -= a[n-1].first;
    rrep(i, n-2, 0) {
        if(sum >= a[i+1].first) {
            ans.pub(a[i].second);
            sum -= a[i].first;
        }
        else {
            break;
        };
    }

    sort(all(ans));

    print(ans.size());
    print_array(ans, ans.size());
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
