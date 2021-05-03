#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define pqueue                  priority_queue
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define out(a, b)               cout << a << " " << b << endl
#define rep(i, s, n)            for(int i = s; i < n; i++)
#define rrep(i, n, s)           for(int i = n; i >= s; i--)
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pii;
typedef vector<vector<int>> vii;
const ll inf = INT_MAX;
const int p = 1e9+7;
const int N = 1e6+5;

/*************User defined function*************/
int n, k;
vector<int> a;

void unsort(int l, int r) {
    if(k <= 0 || l+1 == r) return;
    k -= 2;
    int mid = (l+r)/2;
    swap(a[mid-1], a[mid]);
    unsort(l, mid);
    unsort(mid, r);
}

void solve() {
    cin >> n >> k;

    a.resize(n);
    rep(i, 0, n) a[i] = i+1;

    k--;
    unsort(0, n);
    
    if(k) print(-1);
    else rep(i, 0, n) cout << a[i] << " ";
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
