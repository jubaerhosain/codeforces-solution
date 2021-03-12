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
const int inf = INT_MAX;
const int N = 4e3+5;

/*************User defined function*************/
void solve() {
    int n, x, y;
    cin >> n >> x >> y;

    int d = y - x;
    int mx = 1;
    rrep(i, n-1, 1) {
        if(d%i == 0) {
            mx = i;
            break;
        }
    }

    d /= mx;
    int curr = y;
    vector<int> ans;
    while(ans.size() < n && curr > 0) {
        ans.push_back(curr);
        curr -= d;
    }

    while(ans.size() < n) {
        ans.push_back(y+d);
        y += d;
    }

    for(int a: ans) cout << a << " ";
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
