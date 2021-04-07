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

bool valid(vector<string> &s, int r, int c) {
    if(r > 0 && s[r-1][c] == 'W') return false;
    if(c > 0 && s[r][c-1] == 'W') return false;
    if(c < s[0].size()-1 && s[r][c+1] == 'W') return false;
    if(r < s.size()-1 && s[r+1][c] == 'W') return false;
    return true;
}

void solve() {
    int r, c;
    cin >> r >> c;

    vector<string> s(r);
    rep(i, 0, r) cin >> s[i];

    rep(i, 0, r)
    rep(j, 0, c) 
    if(s[i][j] == 'S') {
        if(!valid(s, i, j)) {
            print("No");
            return;
        }
    }
        
    print("Yes");
    rep(i, 0, r)
    rep(j, 0, c) 
    if(s[i][j] == '.') {
        s[i][j] = 'D';
    }

    rep(i, 0, r) {
        print(s[i]);
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
