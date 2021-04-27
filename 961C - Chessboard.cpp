#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define pqueue                  priority_queue
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define out(a, b)               cout << a << " " << b << endl;
#define rep(i, s, n)            for(int i = s; i < n; i++)
#define rrep(i, n, s)           for(int i = n; i >= s; i--)
typedef unsigned long long ll;
typedef long double ld;
typedef pair<ll, ll> pii;
typedef vector<vector<int>> vii;
const ll inf = INT_MAX;
const int N = 5e2+5;
const int p = 1e9+7;

/*************User defined function*************/
int get_min(vector<string> ans) {
    int mn = inf;
    int one = 0;
    int zero = 0;

    int n = ans.size();
    rep(i, 0, n) {
        rep(j, 0, n) {
            if(i%2 == 0) {
                if(j%2 == 0 && ans[i][j] != '1') one++;
                else if(j%2 == 1 && ans[i][j] != '0') zero++;
            } else {
                if(j%2 == 0 && ans[i][j] != '0') zero++;
                else if(j%2 == 1 && ans[i][j] != '1') one++;
            }
        }
    }

    mn = min(mn, one+zero);
    one = zero = 0;

    rep(i, 0, n) {
        rep(j, 0, n) {
            if(i%2 == 0) {
                if(j%2 == 0 && ans[i][j] != '0') zero++;
                else if(j%2 == 1 && ans[i][j] != '1') one++;
            } else {
                if(j%2 == 0 && ans[i][j] != '1') one++;
                else if(j%2 == 1 && ans[i][j] != '0') zero++;
            }
        }
    }

    return min(mn, one+zero);
}

void solve() {
    int n;
    cin >> n;

    vector<string> a[4];
    rep(i, 0, 4) {
        rep(j, 0, n) {
            string s;
            cin >> s;
            a[i].push_back(s);
        }
    }

    vector<int> p;
    rep(i, 0, 4) p.push_back(i); 



    int mn = inf;
    do {
        vector<string> ans;
        rep(i, 0, n) ans.push_back(a[p[0]][i]+a[p[1]][i]);
        rep(i, 0, n) ans.push_back(a[p[2]][i]+a[p[3]][i]);
        mn = min(mn, get_min(ans));
    } while(next_permutation(all(p)));

    print(mn);
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
