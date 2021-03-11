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
typedef pair<ll, ll> pll;
const int inf = INT_MAX;
const int N = 4e3+5;

/*************User defined function*************/
void solve() {
    int n;
    cin >> n;

    map<string, set<string>> mp;
    while(n--) {
        string key;
        cin >> key;

        int q;
        cin >> q;
        while(q--) {
            string val;
            cin >> val;
            mp[key].insert(val);
        }
    }

    print(mp.size());
    for(auto p: mp) {
        set<string> ans;
        for(string s: p.second) {
            bool flag = true;
            for(string t: p.second) {
                if(s.size() < t.size()) {
                    string suff = t.substr(t.size()-s.size());
                    if(suff == s) {
                        flag = false;
                        break;
                    }
                }
            }
            if(flag) ans.insert(s);
        }
        cout << p.first << " " << ans.size() << " ";
        for(string s: ans) cout << s << " ";
        cout << endl;
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
