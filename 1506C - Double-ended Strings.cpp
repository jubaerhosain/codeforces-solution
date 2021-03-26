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
    string a, b;
    cin >> a >> b;

    if(a.size() < b.size()) swap(a, b);
    int ans = inf, n = b.size();
    rep(i, 0, n) {
        for(int j = i; j < n; j++) {
            string tmp = b.substr(i, n-j);
            if(a.find(tmp) != string::npos) {
                int f = a.size() - tmp.size();
                int s = n - tmp.size();
                ans = min(ans, f+s);
            }
        }
    }

    if(ans == inf) print(a.size()+b.size());
    else print(ans);
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
