#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define pqueue                  priority_queue
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define rep(i, s, n)            for(ll i = s; i < n; i++)
#define rrep(i, n, s)           for(ll i = n; i >= s; i--)
typedef long long int ll;
typedef long double ld;
typedef pair<int, int> pii;
const int inf = INT_MAX;
const int N = 2e5+5;

/*************User defined function*************/
vector<int> mp(N, 0);

void solve() {
    int n;
    cin >> n;

    rep(i, 1, n+1) mp[i] = 0;

    int uniq = 0, mx = 0;
    rep(i, 0, n) {
        int x;
        cin >> x;
        if(mp[x] == 0) uniq++;
        mp[x]++;
        mx = max(mx, mp[x]);
    }

    int a = min(uniq, mx-1);
    int b = min(uniq-1, mx);

    print(max(a, b));
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
