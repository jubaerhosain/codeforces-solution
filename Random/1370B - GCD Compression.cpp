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
const int inf = INT_MAX;
const int N = 4e3+5;

/*************User defined function*************/
void solve() {
    ll n;
    cin >> n;

    vector<pii> even, odd;
    rep(i, 1, 2*n+1) {
        int x; cin >> x;
        if(x&1) odd.push_back({x, i});
        else even.push_back({x, i});
    }

    if(odd.size()&1) {
        even.pop_back();
        odd.pop_back();
    }

    int cnt = 0;
    while(cnt < n-1) {
        if(!odd.empty()) {
            pii p1 = odd.back(); odd.pop_back();
            pii p2 = odd.back(); odd.pop_back();
            cout << p1.second << " " << p2.second << endl;
        } else if(!even.empty()) {
            pii p1 = even.back(); even.pop_back();
            pii p2 = even.back(); even.pop_back();
            cout << p1.second << " " << p2.second << endl;
        }
        cnt++;
    }
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
