#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define pqueue                  priority_queue
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define out(a, b)               cout << a << " " << b << endl;
#define rep(i, s, n)            for(int i = s; i < n; i++)
#define rrep(i, n, s)           for(int i = n; i >= s; i--)
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pii;
typedef vector<vector<int>> vii;
const ll inf = INT_MAX;
const int N = 5e2+5;
const int p = 1e9+7;

/*************User defined function*************/
string s;

int get_cost(int l, int r, char c) {
    int cnt = 0;
    rep(i, l, r+1) if(s[i] != c) cnt++;
    return cnt;
}

int get_min(int l, int r, char c) {
    if(l == r) {
        if(s[l] == c) return 0;
        else return 1;
    }

    int m = (l+r)/2;

    return min(get_cost(l, m, c)+get_min(m+1, r, c+1), 
    get_cost(m+1, r, c)+get_min(l, m, c+1));
}

void solve() {
    int n;
    cin >> n >> s;
    print(get_min(0, n-1, 'a'));
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
