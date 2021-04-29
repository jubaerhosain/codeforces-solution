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
string equal(string a) {
    if(a.size()%2) return a;

    int n = a.size();
    string p = equal(a.substr(0, n/2));
    string q = equal(a.substr(n/2));

    return min(p+q, q+p);
}

void solve() {
    string a, b;
    cin >> a >> b;

    if(equal(a) == equal(b)) print("YES");
    else print("NO");
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
