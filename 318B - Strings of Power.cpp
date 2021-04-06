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
const int N = 2e5+5;

/*************User defined function*************/
void out(int a, int b) {
    cout << a << " " << b << endl;
}

void solve() {
    string s;
    cin >> s;

    if(s.size() < 5) {
        print(0);
        return;
    } 

    vector<int> h, m;
    rep(i, 0, s.size()-4) {
        if(s.substr(i, 5) == "heavy") h.push_back(i);
        else if(s.substr(i, 5) == "metal") m.push_back(i);
    }

    ll ans = 0;
    rep(i, 0, h.size()) {
        int inx = lower_bound(all(m), h[i]) - m.begin();
        ans += (m.size()-inx);
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
    //cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
