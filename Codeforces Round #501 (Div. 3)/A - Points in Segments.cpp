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
const int inf = INT_MAX;
const int N = 2e5+5;

/*************User defined function*************/
// int cmp(pii a, pii b) {
//     if(a.first == b.first) return a.second < b.second;
//     else a.first < b.first;
// }

void solve() {
    int n, m;
    cin >> n >> m;

    vector<pii> v(n);
    rep(i, 0, n) {
        int x, y;
        cin >> x >> y;
        v[i] = {x, y};
    }

    sort(all(v));

    vector<int> ans;
    rep(i, 1, v[0].first) ans.push_back(i);

    int rm = v[0].second;
    rep(i, 1, n) {
        if(v[i].first == v[i-1].first) {
            rm = max(rm, v[i].second);
        } else if(v[i].first > rm+1) {
            rep(j, rm+1, v[i].first) ans.push_back(j);
            rm = max(rm, v[i].second);
        } else {
            rm = max(rm, v[i].second);
        }
    }

    rep(i, rm+1, m+1) ans.push_back(i);

    print(ans.size());
    for(int i: ans) cout << i << " ";
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
    //cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
