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
#define endl                    '\n'    //in interactive problem should not use this
#define println                 cout << endl
#define scan_array(arr, n)      for(int i = 0; i < n; i++) { cin >> arr[i]; }
#define print_array(arr, n)     for(int i = 0; i < n; i++) { cout << arr[i] << " "; } println;
#define print(var)              cout << var << endl
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll; 
const int eps = 1e-9;
const int inf = INT_MAX;
const int N = 2e5+10;

/*************User defined function*************/
void solve() {
    int n, d, k;
    cin >> n >> d >> k;

    if(d >= n) {
        print("NO");
        return;
    }

    vector<int> deg(n, 0);
    vector<pii> ans;
    pqueue<pii, vector<pii>, greater<pii>> pq;
    rep(i, 0, d) {
        deg[i]++;
        deg[i+1]++;

        if(deg[i] > k || deg[i+1] > k) {
            print("NO");
            return;
        }

        ans.pub({i, i+1});
    }

    rep(i, 1, d) {
        pq.push({max(d-i, i), i});
    }

    rep(i, d+1, n) {
        while(!pq.empty() && deg[pq.top().second] == k) {
            pq.pop();
        }

        if(pq.empty() || pq.top().first == d) {
            print("NO");
            return;
        }

        deg[i]++;
        deg[pq.top().second]++;
        ans.pub({i, pq.top().second});
        pq.push({pq.top().first+1, i});
    }

    print("YES");
    rep(i, 0, ans.size()) {
        cout << ans[i].first+1 << " " << ans[i].second+1 << endl;
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
