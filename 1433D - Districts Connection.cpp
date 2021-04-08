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
const int N = 2e5+5;

/*************User defined function*************/
void out(int a, int b) {
    cout << a << " " << b << endl;
}

void solve() {
    int n;
    cin >> n;

    map<int, vector<int>> mp;
    rep(i, 0, n) {
        int x;
        cin >> x;
        mp[x].push_back(i+1);
    }

    // for(auto p: mp) {
    //     cout << p.first << " ";
    //     for(auto i: p.second) cout << i << " ";
    //     cout << endl; 
    // }

    auto p = mp.begin();
    if(p->second.size() == n) {
        print("NO");
        return;
    }

    
    print("YES");
    auto v = p->second;
    p++;
    int nxt = p->second[0];
    while(p != mp.end()) {
        for(auto i: p->second) out(v[0], i);
        p++;
    }

    rep(i, 1, v.size()) out(nxt, v[i]);
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
