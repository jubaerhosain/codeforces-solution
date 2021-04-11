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
typedef vector<vector<int>> vii;
const ll inf = 1e9;
const int N = 2e5+5;

/*************User defined function*************/
void solve() {
    int a, b;
    cin >> a >> b;

    string s;
    cin >> s;

    int n = s.size();
    rep(i, 0, n/2) {
        if(s[i] != '?' && s[n-i-1] == '?') s[n-i-1] = s[i];
        else if(s[i] == '?' && s[n-i-1] != '?') s[i] = s[n-i-1];
        else if(s[i] != s[n-i-1]) {
            print(-1);
            return;
        }
    }

    a -= count(all(s), '0');
    b -= count(all(s), '1');

    rep(i, 0, n/2) {
        if(s[i] == s[n-i-1] && s[i] == '?') {
            if(a >= 2) s[i] = s[n-i-1] = '0', a -= 2;
            else s[i] = s[n-i-1] = '1', b -= 2;
        }
    }

    if(s[n/2] == '?') {
        if(a > 0) s[n/2] = '0', a--;
        else s[n/2] = '1', b--;
    }

    if(a == 0 && b == 0) print(s);
    else print(-1);
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
