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
const int N = 2e5+5;

/*************User defined function*************/
void out(int a, int b, int c) {
    cout << a << " " << b << " " << c << endl;
}

void solve() {
    int n;
    cin >> n;

    int inx = -1, mx = 0;
    vector<int> a(n), cnt(N, 0);
    rep(i, 0, n) {
        cin >> a[i];
        cnt[a[i]]++;

        if(mx < cnt[a[i]]) {
            mx = cnt[a[i]];
            inx = i;
        }
    }

    print(n-cnt[a[inx]]);

    int mxe = a[inx];
    rrep(i, inx, 0) {
        if(a[i] < mxe) {
            out(1, i+1, i+2);
            a[i] = mxe;
        } else if(a[i] > mxe) {
            out(2, i+1, i+2);
            a[i] = mxe;
        }
    }

    rep(i, 0, n) {
        if(a[i] < mxe) {
            out(1, i+1, i);
            a[i] = mxe;
        } else if(a[i] > mxe) {
            out(2, i+1, i);
            a[i] = mxe;
        }
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
