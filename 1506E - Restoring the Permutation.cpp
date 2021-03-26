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
typedef vector<vector<int>> vii;
const ll inf = 1e9;
const int N = 1e5+5;

/*************User defined function*************/
void out(int a, int b, int c) {
    cout << a << " " << b << " " << c << endl;
}

void solve() {
    int n;
    cin >> n;

    vector<int> v(n), ans;
    rep(i, 0, n) cin >> v[i];

    int curr = 1;
    set<int> st;
    vector<int> inx;
    rep(i, 0, n) {
        if(st.count(v[i])) {
            while(st.count(curr)) curr++;
            ans.push_back(curr);
            st.insert(curr);
            curr++;
            inx.push_back(i);
        } else {
            ans.push_back(v[i]);
            st.insert(v[i]);
        }
    }

    for(auto i: ans) cout << i << " ";
    cout << endl;

    st.clear();
    for(int i: inx) st.insert(ans[i]);

    for(int i: inx) {
        auto u = st.lower_bound(ans[i-1]);
        u--;
        ans[i] = *u;
        st.erase(*u);
    }

    for(auto i: ans) cout << i << " ";
    cout << endl;
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
