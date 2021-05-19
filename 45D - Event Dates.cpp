#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define out(a, b)               cout << a << " " << b << endl
#define rep(i, s, n)            for(int i = s; i < n; i++)
#define rrep(i, n, s)           for(int i = n; i >= s; i--)
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<vector<int>> vii;

/*************User defined function*************/
const int N = 1e4+5;

void solve() {
    int n;
    cin >> n;

    vector<pair<pii, int>> v(n);
    rep(i, 0, n) {
        int l, r;
        cin >> l >> r;
        v[i].first = {r, l};
        v[i].second = i;
    }

    sort(all(v));

    set<int> set;
    vector<int> ans(n);
    rep(i, 0, n) {
        int l = v[i].first.second;
        int r = v[i].first.first;
        int pos = v[i].second;
        while(l <= r) {
            set.insert(l);
            if(set.size() == i+1) {
                ans[pos] = l;
                break;
            }
            l++;
        }
    }

    for(auto i: ans) cout << i << " ";
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
}    #include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define out(a, b)               cout << a << " " << b << endl
#define rep(i, s, n)            for(int i = s; i < n; i++)
#define rrep(i, n, s)           for(int i = n; i >= s; i--)
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<vector<int>> vii;

/*************User defined function*************/
const int N = 1e4+5;

void solve() {
    int n;
    cin >> n;

    vector<pair<pii, int>> v(n);
    rep(i, 0, n) {
        int l, r;
        cin >> l >> r;
        v[i].first = {r, l};
        v[i].second = i;
    }

    sort(all(v));

    set<int> set;
    vector<int> ans(n);
    rep(i, 0, n) {
        int l = v[i].first.second;
        int r = v[i].first.first;
        int pos = v[i].second;
        while(l <= r) {
            set.insert(l);
            if(set.size() == i+1) {
                ans[pos] = l;
                break;
            }
            l++;
        }
    }

    for(auto i: ans) cout << i << " ";
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
