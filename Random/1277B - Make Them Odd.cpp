#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define pqueue                  priority_queues
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define rep(i, s, n)            for(int i = s; i < n; i++)
#define rrep(i, n, s)           for(int i = n; i >= s; i--)
typedef long long int ll;
typedef long double ld;
typedef pair<int, int> pii;
const ll inf = 1e18;
const int N = 1e5+5;

/*************User defined function*************/
void solve() {
    int n;
    cin >> n;

    set<int> st;
    rep(i, 0, n) {
        int x; cin >> x;
        if(x%2 == 0) st.insert(x);  
    }

    int ans = 0;
    while(!st.empty()) {
        int x = *st.rbegin();
        st.erase(x);
        if(x%2 == 0) st.insert(x/2), ans++;
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
    cout << setprecision(9);

    int test = 1;
    cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
