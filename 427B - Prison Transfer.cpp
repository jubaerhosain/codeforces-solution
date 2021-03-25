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
    int n, t, c;
    cin >> n >> t >> c;

    vector<int> inx;
    rep(i, 0, n) {
        int x;
        cin >> x;
        if(x > t) inx.push_back(i);
    }

    int ans = 0;
    if(inx.size() == 0) {
        ans = max(0, n - (c-1));
        print(ans);
        return;
    }

    ans = max(0, inx[0] - (c-1));
    rep(i, 1, inx.size()) {
        ans += max(0, inx[i]-inx[i-1]-1-(c-1));
    }

    ans += max(0, n-inx[inx.size()-1]-1-(c-1));

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
