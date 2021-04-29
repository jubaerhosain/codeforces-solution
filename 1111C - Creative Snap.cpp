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
ll A, B;
vector<int> pos;

ll get_min(int l, int r) {
    int i = lower_bound(all(pos), l) - pos.begin();
    int j = upper_bound(all(pos), r) - pos.begin() - 1;

    ll cost;
    int cnt = j-i+1;
    if(cnt == 0) cost = A;
    else cost = B*cnt*(r-l+1);

    if(l == r  || cnt == 0) return cost;

    int mid = (l+r)/2;

    return min(cost, get_min(l, mid)+get_min(mid+1, r));
}

void solve() {
    int n, k;
    cin >> n >> k >> A >> B;

    rep(i, 0, k) {
        int x;
        cin >> x;
        pos.push_back(x);
    }

    sort(all(pos));

    print(get_min(1, (1<<n)));
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
