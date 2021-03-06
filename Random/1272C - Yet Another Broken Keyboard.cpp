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
void solve() {
    int n, k;
    cin >> n >> k;

    string s;
    set<char> st;
    cin >> s;
    rep(i, 0, k) {
        char c; 
        cin >> c;
        st.insert(c);
    }

    ll sum = 0, cnt = 0;
    for(char c: s) {
        if(st.count(c) == 0) {
            sum += (cnt*(cnt+1))/2;
            cnt = 0;
        } else {
            cnt++;
        }
    } 

    sum += (cnt*(cnt+1))/2;

    print(sum);
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
