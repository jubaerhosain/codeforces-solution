#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define pqueue                  priority_queue
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define rep(i, s, n)            for(ll i = s; i < n; i++)
#define rrep(i, n, s)           for(ll i = n; i >= s; i--)
typedef long long int ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const int inf = INT_MAX;
const int N = 4e3+5;

/*************User defined function*************/
void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> v, ans;
    rep(i, 1, k) v.push_back(i);
    rep(i, k+1, n+1) ans.push_back(i);

    int cnt = k-1;
    while(cnt--) {
        int curr = v.front();
        v.erase(v.begin());
        if(!binary_search(all(v), k-curr)) ans.push_back(curr);
    }

    print(ans.size());
    for(int i: ans) cout << i << " ";
    cout << endl;
}

/*************main function*************/
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 

    cout << fixed << showpoint;
    cout << setprecision(9);

    int test = 1;
    cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
