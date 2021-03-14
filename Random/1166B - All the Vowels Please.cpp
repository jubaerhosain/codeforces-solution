#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define pqueue                  priority_queues
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define rep(i, s, n)            for(int i = s; i < n; i++)
#define rrep(i, n, s)           for(int i = n; i >= s; i--)
typedef long long int ll;
typedef long double ld;
typedef pair<int, int> pii;
const ll inf = 1e18;
const int N = 1e5+5;

/*************User defined function*************/
void solve() {
    int k; 
    cin >> k;

    int m = -1, n = -1;
    for(int i = 2; i*i <= k; i++) {
        if(k%i == 0 && i >= 5) {
            m = i;
            n = k/i;
            break;
        }
    }

    if(min(m, n) < 5) {
        print(-1);
        return;
    }

    string v = "aeiou";
    
    int r = 0;
    rep(i, 0, m) {
        int c = r;
        rep(j, 0, n) {
            cout << v[c];
            c = (c+1)%5;
        }
        r = (r+1)%5;
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
