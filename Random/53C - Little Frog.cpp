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
const ll inf = 1e18;
const int N = 1e5+5;

/*************User defined function*************/
bool cmp(pii a, pii b) {
    return (a.first-b.first) < (a.second-b.second);
}

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);

    int i = 0;
    int l = 1, r = n;
    while(l < r) {
        v[i] = l, v[i+1] = r;
        l++, r--;
        i += 2;
    }

    if(n&1) v[n-1] = l;

    for(auto i: v) cout << i << " ";
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
