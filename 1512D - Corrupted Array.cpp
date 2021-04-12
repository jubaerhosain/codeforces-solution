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
    int n;
    cin >> n;

    ll sum = 0;
    vector<int> v(n+2);
    rep(i, 0, n+2) {
        cin >> v[i];
        sum += v[i];
    }

    sort(all(v));

    if(sum-(v[n]+v[n+1]) == v[n]) {
        rep(i, 0, n) cout << v[i] << " ";
        cout << endl;
        return;
    }

    int del = -1;
    sum -= v[n+1];
    rep(i, 0, n+1) {
        if(sum-v[i] == v[n+1]) {
            del = v[i];
            break;
        }
    }

    if(del == -1) {
        print(-1);
        return;
    }

    rep(i, 0, n+1) {
        if(v[i] == del) del = -1;
        else cout << v[i] << " ";
    }
    cout << endl;
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
