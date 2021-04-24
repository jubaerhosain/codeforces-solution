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
typedef vector<vector<bool>> vii;
const ll inf = INT_MAX;
const int N = 1e2+5;
const int p = 1e9+7;

/*************User defined function*************/
int v[N][N];
int ans[N][N];

void solve() {
    int n, m;
    cin >> n >> m;

    rep(i, 0, n) {
        rep(j, 0, m) ans[i][j] = -1;
    } 

    vector<pii> v;
    rep(i, 0, n) {
        rep(j, 0, m) {
            int x;
            cin >> x;
            v.push_back({x, i});
        }
    }

    sort(all(v));
    rep(i, 0, m) {
        auto p = v[i];
        ans[p.second][i] = p.first;
    }


    int inx = m;
    while(inx < v.size()) {
        rep(j, 0, m) {
            auto p = v[inx];
            if(ans[p.second][j] == -1) {
                ans[p.second][j] = p.first;
                inx++;
            }
            if(inx == v.size()) break;
        }
    }

    rep(i, 0, n) {
        rep(j, 0, m) cout << ans[i][j] << " ";
        print("");
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
    cout << setprecision(12);

    int test = 1;
    cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
