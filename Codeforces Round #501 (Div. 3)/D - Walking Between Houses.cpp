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
typedef pair<ll, ll> pll;
const int inf = INT_MAX;
const int N = 2e5+5;

/*************User defined function*************/
ll get_curr(ll curr, ll dist) {
    if(curr - dist > 0) return curr - dist;
    else return curr + dist; 
}

void solve() {
    ll n, k, s;
    cin >> n >> k >> s;
    
    if(k > s || k*(n-1) < s) {
        print("NO");
        return;
    }

    print("YES");
    ll curr = 1;
    while(k > 0) {
        ll dist = min(n-1, s-(k-1));
        curr = get_curr(curr, dist);
        s -= dist;
        k -= 1;
        cout << curr << " ";
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
    //cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
