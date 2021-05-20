#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define out(a, b)               cout << a << " " << b << endl
#define rep(i, s, n)            for(int i = s; i < n; i++)
#define rrep(i, n, s)           for(int i = n; i >= s; i--)
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<vector<int>> vii;

/*************User defined function*************/
const int inf = 1e9;
const int N = 1e5+5;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    rep(i, 0, n) 
        cin >> a[i];

    queue<int> q;
    vector<int> d(n+1, 0);
    q.push(1);
    
    int i = 1, ans = 0;
    while(i < n) {
        int u = q.front();
        q.pop();
        while(i < n-1 && a[i] < a[i+1]) {
            q.push(a[i]);
            d[a[i]] = 1 + d[u];
            ans = max(ans, d[a[i]]);
            i++;
        }
        q.push(a[i]);
        d[a[i]] = 1 + d[u];
        ans = max(ans, d[a[i]]);
        i++;
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
    cout << setprecision(12);

    int test = 1;
    cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
