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
const ll inf = 1e9;
const int N = 2e5+5;

/*************User defined function*************/
bool next(int n, int k, int s) {
    int mn , mx;
    int e = n-k;
    int tot = n*(n+1)/2;

    mn = k*(k+1)/2;
    mx = tot - (e*(e+1)/2);

    if(s < mn || s > mx) return false;
    return true;
}

void solve() {
    int n, l, r, s;
    cin >> n >> l >> r >> s;

    int k = r-l+1;
    if(!next(n, k, s)) {
        print(-1);
        return;
    }

    vector<int> a, b;
    rrep(i, n, 1) {
        if(s-i >= 0 && next(n-1, k-1, s-i)) {
            a.push_back(i);
            s -= i;
            k--;
        } else {
            b.push_back(i);
        }
    }

    if(s != 0) {
        print(-1);
        return;
    }

    rep(i, 0, l-1) cout << b.back() << " ", b.pop_back();
    for(auto i: a) cout << i << " ";
    for(auto i: b) cout << i << " ";
    print("");
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
