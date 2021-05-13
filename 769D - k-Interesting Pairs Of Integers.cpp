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
typedef pair<int, int> pii;
typedef vector<vector<int>> vii;
const ll inf = INT_MAX;
const int N = 1e4+5;

/*************User defined function*************/
ll cnt[N];

void solve() {
    int n, k;
    cin >> n >> k;

    rep(i, 0, n) {
        int x;
        cin >> x;
        cnt[x]++;
    }

    ll ans = 0;
    rep(i, 0, N) {
        rep(j, i, N) {
            if(__builtin_popcount(i^j) == k) {
                if(i != j) 
                    ans += (cnt[i]*cnt[j]);
                else 
                    ans += (cnt[i]*(cnt[i]-1))/2;
            }
        }
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
