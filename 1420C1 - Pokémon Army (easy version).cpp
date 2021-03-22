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
    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];

    if(n == 1) {
        print(a[0]);
        return;
    } else if(n == 2) {
        print(max(a[0], a[1]));
        return;
    }

    int i = 1;
    ll ans = 0, mx = 0;
    if(a[0] > a[1]) mx = a[0];
    while(i < n-1) {
        if(a[i] > a[i-1] && a[i] > a[i+1]) {
            mx = a[i];
        } else if(a[i] < a[i-1] && a[i] < a[i+1]) {
            ans += mx-a[i];
        }
        i++;
    }

    if(a[n-1] > a[n-2]) ans += a[n-1]; 
    else ans += mx;
    
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
