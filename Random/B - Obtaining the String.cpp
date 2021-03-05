#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define pqueue                  priority_queue
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define rep(i, s, n)            for(ll i = s; i < n; i++)
#define rrep(i, n, s)           for(ll i = n; i >= s; i--)
typedef long long int ll;
typedef long double ld;
typedef pair<int, int> pii;
const int inf = INT_MAX;
const int N = 2e5+5;

/*************User defined function*************/
int find(string s, char c, int j) {
    rep(i, j, s.size()) {
        if(s[i] == c) return i;
    }
    return -1;
}

void solve() {
    int n;
    cin >> n;

    string s, t;
    cin >> s >> t;

    vector<int> ans;
    rep(i, 0, n) {
        if(s[i] != t[i]) {
            int pos = find(s, t[i], i+1);

            if(pos == -1) {
                print(-1);
                return;
            }

            rrep(j, pos, i+1) {
                swap(s[j], s[j-1]);
                ans.push_back(j);
            }
        }
    }
    
    print(ans.size());
    for(int i: ans) cout << i << " ";

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
