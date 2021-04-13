#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define pqueue                  priority_queue
//#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define out(c, a, b)               cout << c << " " << a << " " << b << endl;
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
    int a[4];
    int p[] = {4, 8, 15, 16, 23, 42};
    rep(i, 0, 4) {
        out('?', i+1, i+2);
        cout.flush();
        cin >> a[i];
    }

    do {
        bool flag = true;
        rep(i, 0, 4) {
            if(p[i]*p[i+1] != a[i]) flag = false;
        } 
        if(flag) break;
    } while(next_permutation(p, p+6));

    cout << '!' << " ";
    rep(i, 0, 6) cout << p[i] << " ";
    cout << endl;
    cout.flush();
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
