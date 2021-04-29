#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define pqueue                  priority_queue
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define out(a, b)               cout << a << " " << b << endl;
#define rep(i, s, n)            for(int i = s; i < n; i++)
#define rrep(i, n, s)           for(int i = n; i >= s; i--)
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pii;
typedef vector<vector<int>> vii;
const ll inf = INT_MAX;
const int N = 5e2+5;
const int p = 1e9+7;

/*************User defined function*************/
bool equal(string a, string b) {
    if(a.size()%2) return a == b;
    else if(a == b) return true;

    int n = a.size();
    string p = a.substr(0, n/2);
    string q = a.substr(n/2);
    string r = b.substr(0, n/2);
    string s = b.substr(n/2);

    bool u, v, w, x;
    u = v = w = x = false;
    if(p == r) u = equal(q, s);
    if(p == s) v = equal(q, r);
    if(q == r) w = equal(p, s);
    if(q == s) x = equal(p, r);

    return u || v || w || x;
}

void solve() {
    string a, b;
    cin >> a >> b;

    if(equal(a, b)) print("YES");
    else print("NO");
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
    cout << setprecision(12);

    int test = 1;
    //cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
