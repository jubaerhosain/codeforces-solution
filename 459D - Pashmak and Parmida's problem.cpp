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
int n;
int fen[N];

void update(int i, int val) {
    while(i <= n) {
        fen[i] += val;
        i = i+(i&(-i));
    }
}

ll get_sum(int i) {
    ll sum = 0;
    while(i > 0) {
        sum += fen[i];
        i = i-(i&(-i));
    }
    return sum;
}

void solve() {
    cin >> n;

    map<int, int> cnt;
    vector<int> a(n), freq(n);
    rep(i, 0, n) {
        cin >> a[i];
        cnt[a[i]]++;
        freq[i] = cnt[a[i]];
    }

    cnt.clear();
    ll ans = 0;
    rrep(i, n-1, 0) {
        ans += get_sum(freq[i]-1);
        cnt[a[i]]++;
        update(cnt[a[i]], 1);
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
    //cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
