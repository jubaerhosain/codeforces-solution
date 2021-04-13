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
void solve() {
    int n;
    cin >> n;

    queue<int> a, b;
    
    int k1;
    cin >> k1;
    while(k1--) {
        int x;
        cin >> x;
        a.push(x);
    }

    int k2;
    cin >> k2;
    while(k2--) {
        int x;
        cin >> x;
        b.push(x);
    }

    n = 1<<10;
    int ans = 0;
    while(!a.empty() && !b.empty()) {
        int x = a.front();
        int y = b.front();
        a.pop(), b.pop();

        ans++;
        if(x > y) a.push(y), a.push(x);
        else if(x < y) b.push(x), b.push(y);
        if(ans > n) break;
    }

    int p = a.empty() ? 2:1;
    p = b.empty() ? 1:2;

    if(ans == n+1) print(-1);
    else out(ans, p);
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
