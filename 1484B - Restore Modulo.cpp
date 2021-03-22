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
void out(int a, int b) {
    cout << a << " " << b << endl;
}

void solve() {
    int n;
    cin >> n;

    int mx = -1;
    map<int, int> mp;
    vector<int> v(n);
    rep(i, 0, n) {
        cin >> v[i];
        mx = max(mx, v[i]);
        if(i > 0) mp[v[i]-v[i-1]]++;
    }

    if(n <= 2) {
        print(0);
        return;
    } else if(mp.size() > 2) {
        print(-1);
        return;
    } else if(mp.size() < 2) {
        print(0);
        return;
    }

    int e, c, i = 0;
    for(auto p: mp) {
        if(i == 0) e = p.first;
        else c = p.first;
        i++;
    }

    if(e >= 0 && c >= 0) {
        print(-1);
        return; 
    } else if(e <= 0 && c <= 0) {
        print(-1);
        return;
    } else if(mx > c-e) {
        print(-1);
        return;
    }

    out(c-e, c);
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
