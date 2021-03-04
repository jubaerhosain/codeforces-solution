#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define pqueue                  priority_queue
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define rep(i, s, n)            for(ll i = s; i < n; i++)
#define rrep(i, n, s)           for(ll i = n; i >= s; i--)
typedef long long int ll;
typedef long double ld;
typedef pair<int, int> pii;
const int inf = INT_MAX;
const int N = 2e5+5;

/*************User defined function*************/
void solve() {
    int n, m;
    cin >> n >> m;

    string s, t;
    cin >> s >> t;

    vector<int> p(m), p1(m);
    int i = 0, j = 0;
    while(i < n && j < m) {
        if(s[i] == t[j]) {
            p[j] = i;
            i++, j++;
        } else {
            i++;
        }
    }

    i = n-1, j = m-1;
    while(i >= 0 && j >= 0) {
        if(s[i] == t[j]) {
            p1[j] = i;
            i--, j--;
        } else {
            i--;
        }
    }

    int ans = 0;
    rep(i, 0, m-1) {
        ans = max(ans, p1[i+1] - p[i]);
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
