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
void out(int a, int b) {
    cout << a << " " << b << endl;
}

int a[N];

void solve() {
    int n;
    cin >> n;

    rep(i, 0, n) cin >> a[i];

    string b;
    cin >> b;

    int l = 0;
    rep(i, 1, b.size()) {
        if(b[i] == b[i-1]) continue;
        else {
            if(b[i] == '0') 
                sort(a+l, a+i+1);
            l = i;
        }
    }

    if(b[n-2] == '1')
        sort(a+l, a+n);

    rep(i, 1, n) {
        if(a[i] < a[i-1]) {
            print("NO");
            return;
        }
    }

    print("YES");
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
