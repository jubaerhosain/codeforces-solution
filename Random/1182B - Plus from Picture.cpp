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
typedef pair<ll, ll> pll;
const int inf = INT_MAX;
const int N = 4e3+5;

/*************User defined function*************/
void solve() {
    int h, w;
    cin >> h >> w;

    vector<string> grid(h);
    rep(i, 0, h) cin >> grid[i];

    int cnt = 0;
    rep(i, 1, h-1) {
        rep(j, 1, w-1) {
            if(grid[i][j] == '*' && grid[i-1][j] == '*' && grid[i+1][j] == '*') {
                if(cnt < 1 && grid[i][j-1] == '*' && grid[i][j+1] == '*') {
                    cnt++;
                    grid[i][j] = '.';
                    int a = i-1;
                    while(a >= 0 && grid[a][j] == '*') grid[a][j] = '.', a--;
                    a = i+1;
                    while(a < h && grid[a][j] == '*') grid[a][j] = '.', a++;
                    a = j-1;
                    while(a >= 0 && grid[i][a] == '*') grid[i][a] = '.', a--;
                    a = j+1;
                    while(a < w && grid[i][a] == '*') grid[i][a] = '.', a++;
                }
            }
        }
    }

    bool flag = true;
    for(string s: grid) {
        for(char c: s) {
            if(c == '*') {
                flag = false;
                break;
            }
        }
    }

    if(cnt == 1 && flag) {
        print("YES");
    } else {
        print("NO");
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
