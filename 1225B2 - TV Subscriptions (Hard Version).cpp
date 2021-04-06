#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define pqueue                  priority_queue
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define rep(i, s, n)            for(int i = s; i < n; i++)
#define rrep(i, n, s)           for(int i = n; i >= s; i--)
typedef long long int ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<vector<int>> vii;
const ll inf = 1e9;
const int N = 2e5+5;

/*************User defined function*************/
void out(int a, int b) {
    cout << a << " " << b << endl;
}

void solve() {
    int n, k, d;
    cin >> n >> k >> d;

    vector<int> v(n);
    rep(i, 0, n) cin >> v[i];

    map<int, int> mp;
    rep(i, 0, d) mp[v[i]]++;

    int ans = inf;
    int l = 0, r = d-1;
    while(r < n) {
        ans = min(ans, (int)mp.size());
        if(r == n-1) break;
        l++, r++;
        mp[v[l-1]]--;
        if(mp[v[l-1]] == 0) mp.erase(v[l-1]);
        mp[v[r]]++;
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

    cout << fixed << showpoint;
    cout << setprecision(9);

    int test = 1;
    cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
