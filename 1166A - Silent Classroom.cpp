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
const ll inf = INT_MAX;
const int N = 2e5+10;
const int p = 1e9+7;

/*************User defined function*************/
int g[300][300];

void solve() {
    int n;
    cin >> n;

    int cnt[26] = {0};
    rep(i, 0, n) {
        string s;
        cin >> s;
        cnt[s[0]-'a']++;
    }

    int ans = 0;
    for(auto i: cnt) {
        if(i > 2) {
            n = i/2;
            if(i%2 == 0) {
                ans += (n*(n-1));
            } else {
                ans += (n*(n-1))/2;
                n++;
                ans += (n*(n-1))/2;
            }
        }
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
