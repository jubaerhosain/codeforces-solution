#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define pqueue                  priority_queues
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define rep(i, s, n)            for(int i = s; i < n; i++)
#define rrep(i, n, s)           for(int i = n; i >= s; i--)
typedef long long int ll;
typedef long double ld;
typedef pair<int, int> pii;
const ll inf = 1e18;
const int N = 1e5+5;

/*************User defined function*************/
void printf(int a, int b, int c) {
    cout << a << " " << b << " " << c << endl;
}

void solve() {
    int n, m;
    cin >> n >> m;

    map<int, int> mp;
    rep(i, 0, n) {
        int x; cin >> x;
        mp[x%m]++;
    }

    int ans = 0;
    set<int> used;
    for(auto p: mp) {
        if(p.first == 0) {
            ans++;
            used.insert(p.first);
        } else if(!used.count(p.first) && mp.count(m-p.first)) {
            int a = p.second;
            int b = mp[m-p.first];
            if(abs(a-b) <= 1) ans++;
            else ans += abs(a-b);
            used.insert(p.first);
            used.insert(m-p.first);
        } else if(!used.count(p.first)) {
            ans += p.second;
            used.insert(p.first);
        }
    }

    print(ans);
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
