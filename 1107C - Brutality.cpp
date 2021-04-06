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
const int N = 1e5+5;

/*************User defined function*************/
void out(int a, int b) {
    cout << a << " " << b << endl;
}

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];

    string s;
    cin >> s;

    ll ans = 0;
    int l = 0;
    vector<int> v;
    rep(i, 1, n) {
        if(s[i] == s[i-1]) continue;
        else {
            v.clear();
            rep(j, l, i) v.push_back(a[j]);
            sort(all(v), greater<int>());
            int m = min(k, (int)v.size());
            rep(j, 0, m) ans += v[j];
            l = i;
        }
    }

    v.clear();
    rep(i, l, n) v.push_back(a[i]);
    sort(all(v), greater<int>());
    int m = min(k, (int)v.size());
    rep(i, 0, m) ans += v[i];
    
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
    //cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
