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
    int k;
    cin >> k;

    string s, a;
    cin >> s;

    rep(i, 0, k) a += s;

    vector<int> mp[26];
    rep(i, 0, a.size()) {
        char c = a[i];
        mp[c-'a'].push_back(i);
    }

    int q;
    cin >> q;

    rep(i, 0, q) {
        int p;
        char c;
        cin >> p >> c;

        p--;       
        a[mp[c-'a'][p]] = '0';
        mp[c-'a'].erase(mp[c-'a'].begin()+p);
    }

    rep(i, 0, a.size()) {
        if(a[i] == '0') continue;
        cout << a[i];
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
