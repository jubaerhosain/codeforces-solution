#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define out(a, b, c)            cout << a << " " << b << " " << c << endl
#define rep(i, s, n)            for(int i = s; i < n; i++)
#define rrep(i, n, s)           for(int i = n; i >= s; i--)
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pii;

/*************User defined function*************/
const ll inf = 1e16;
const int N = 1e5+5;

void solve() {
    int n;
    cin >> n;

    vector<string> ans;
    set<string> s1, s2;
    rep(i, 0, n) {
        string name, home;
        cin >> name >> home;
        string x = name.substr(0, 3);
        string y = name.substr(0, 2) + home.substr(0, 1);
        if(!s2.count(y)) {
            s2.insert(y);
            ans.push_back(y);
        } else {
            if(s1.count(x) || s2.count(x)) {
                print("NO");
                return;
            }
            s1.insert(x);
            ans.push_back(x);
        }
        s1.insert(x);
    }

    print(("YES"));
    for(auto it: ans) print(it);
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
