#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define out(a, b, c)            cout << a << " " << b << " " << c << endl
#define rep(i, s, n)            for(int i = s; i < n; i++)
#define rrep(i, n, s)           for(int i = n; i >= s; i--)
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;

/*************User defined function*************/
const int inf = 1e9;
const int N = 1e5+5;
int d[26][26];

void solve() {
    string s, t;
    cin >> s >> t;

    if(s.size() != t.size()) {
        print(-1);
        return;
    }

    rep(i, 0, 26) rep(j, 0, 26) {
        d[i][j] = inf;
        if(i == j) d[i][j] = 0;
    }

    int n;
    cin >> n;
    rep(i, 0, n) {
        int w;
        char a, b; 
        cin >> a >> b >> w;
        int x  = a - 'a', y = b - 'a';
        d[x][y] = min(d[x][y], w);
    }

    rep(k, 0, 26) rep(i, 0, 26) {
        rep(j, 0, 26) {
            if(d[i][k] != inf && d[k][j] != inf) {
                d[i][j] = min(d[i][j], d[i][k]+d[k][j]);
            } 
        }
    }

    int res = 0;
    string ans;
    rep(i, 0, s.size()) {
        char ch;
        int curr = inf;
        rep(j, 0, 26) {
            int x = s[i] - 'a';
            int y = t[i] - 'a';
            if(d[x][j] + d[y][j] < curr) {
                ch = j + 'a';
                curr = d[x][j] + d[y][j];
            }
        }
        if(curr == inf) {
            print(-1);
            return;
        }
        res += curr;
        ans += ch;
    }

    print(res);
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
    cout << setprecision(12);

    int test = 1;
    //cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
