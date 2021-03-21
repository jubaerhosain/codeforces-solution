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
void out(int a, int b, int c) {
    cout << a << " " << b << " " << c << endl;
}

void solve() {
    int n, m;
    cin >> n >> m;

    vector<pii> v;
    map<int, vector<int>> mp;
    rep(i, 0, m) {
        int k;
        cin >> k;

        v.push_back({k, i});

        rep(j, 0, k) {
            int x;
            cin >> x;
            mp[i].push_back(x);
        }
    } 

    sort(all(v));

    int mx = (m+1)/2;
    vector<int> ans(m);
    vector<int> cnt(n+1, 0);
    for(auto p: v) {
        int k = p.first;
        int i = p.second;

        int mc = inf, inx = -1;
        for(auto x: mp[i]) {
            if(cnt[x] < mc && cnt[x] < mx) {
                mc = cnt[x];
                inx = x;
            }
        }

        if(inx != -1) {
            cnt[inx]++;
            ans[i] = inx;
        } else {
            print("NO");
            return;
        }
    }

    print("YES");
    for(auto i: ans) cout << i << " ";
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
