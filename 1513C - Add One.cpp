#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define pqueue                  priority_queue
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define out(a, b)               cout << a << " " << b << endl;
#define rep(i, s, n)            for(int i = s; i < n; i++)
#define rrep(i, n, s)           for(int i = n; i >= s; i--)
typedef long long int ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<vector<int>> vii;
const int p = 1e9+7;
const ll inf = 1e9;
const int N = 2e5+10;

/*************User defined function*************/
int a[10], b[10];
int ans[N];

void init() {
    a[0] = 1;
    rep(i, 1, N) {
        b[0] = a[9]%p;
        b[1] = a[9]%p + a[0]%p;
        b[2] = a[1]%p;
        b[3] = a[2]%p;
        b[4] = a[3]%p;
        b[5] = a[4]%p;
        b[6] = a[5]%p;
        b[7] = a[6]%p;
        b[8] = a[7]%p;
        b[9] = a[8]%p;

        ll sum = 0;
        rep(j, 0, 10) {
            a[j] = b[j];
            sum += a[j];
        }
        ans[i] = sum%p;
    }
}

void solve() {
    int n, m;
    cin >> n >> m;

    ll sum = 0;
    while(n != 0) {
        int d = n%10;
        n /= 10;
        sum += ans[m+d];
    }

    print(sum%p);
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

    init();

    int test = 1;
    cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
