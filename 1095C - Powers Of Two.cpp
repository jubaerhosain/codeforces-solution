#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define pqueue                  priority_queue
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define out(a, b)               cout << a << " " << b << endl;
#define rep(i, s, n)            for(int i = s; i < n; i++)
#define rrep(i, n, s)           for(int i = n; i >= s; i--)
typedef unsigned long long ll;
typedef long double ld;
typedef pair<ll, ll> pii;
typedef vector<vector<bool>> vii;
const ll inf = INT_MAX;
const int N = 5e2+5;
const int p = 1e9+7;

/*************User defined function*************/
void solve() {
    int n, k;
    cin >> n >> k;

    if(k < __builtin_popcount(n)) {
        print("NO");
        return;
    }

    queue<int> q;
    map<int, int> map;
    rep(i, 0, 32) {
        if(n&(1<<i)) {
            map[1<<i]++;
            q.push(1<<i);
        }
    }

    int cnt = q.size();
    while(!q.empty() && cnt < k) {
        int a = q.front();
        q.pop();

        if(a == 1) continue;

        map[a]--;
        map[a/2] += 2;
        if(a/2 > 1) q.push(a/2), q.push(a/2);
        cnt++;
    }

    if(cnt < k) {
        print("NO");
        return;
    }

    print("YES");
    for(auto p: map) {
        rep(i, 0, p.second) cout << p.first << " ";
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
    cout << setprecision(12);

    int test = 1;
    //cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
