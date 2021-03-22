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
const int N = 1e5+5;

/*************User defined function*************/
void out(int a, int b) {
    cout << a << " " << b << endl;
}

void solve() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int f1 = -1, l1 = -1;
    rep(i, 0, n) {
        if(s[i] == '1') {
            f1 = i;
            break;
        }
    }

    //If all are 0
    int i;
    int ans = 0;
    if(f1 == -1) {
        i = 0;
        while(i < n) {
            ans++;
            i += k+1;
        }

        print(ans);
        return;
    }

    rrep(i, n-1, 0) {
        if(s[i] == '1') {
            l1 = i;
            break;
        }
    }

    //first part with leading 0
    i = 0;
    while(i < f1-k) {
        ans++;
        i += k+1;
    }

    //last part with trailling 0
    i = l1+k+1;
    while(i < n) {
        ans++;
        i += k+1;
    }

    rep(i, f1, l1+1) {
        if(s[i] == '1') {
            int j = f1+k+1;
            while(j < i-k) {
                ans++;
                j += k+1;
            }
            f1 = i;
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
    cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
