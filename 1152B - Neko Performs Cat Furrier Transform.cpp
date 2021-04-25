#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define pqueue                  priority_queue
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define out(a, b)               cout << a << " " << b << endl;
#define rep(i, s, n)            for(int i = s; i < n; i++)
#define rrep(i, n, s)           for(int i = n; i >= s; i--)
typedef long long int ll;
typedef long double ld;
typedef pair<ll, ll> pii;
typedef vector<vector<bool>> vii;
const ll inf = INT_MAX;
const int N = 5e2+5;
const int p = 1e9+7;

/*************User defined function*************/
bool valid(int n) {
    int clz = __builtin_clz(n);
    int sb = __builtin_popcount(n);
    return (clz+sb == 32);
}

void solve() {
    int n;
    cin >> n;

    int t = 0;
    vector<int> ans;
    while(!valid(n)) {
        t++;
        if(t%2 == 0) {
            n++;
            continue;
        }

        int clz = __builtin_clz(n);
        int msb = 31 - clz;
        while(n&(1<<msb)) msb--;
        msb++;
        ans.push_back(msb);
        int x = (1<<msb) - 1;
        n = (n^x);
        if(t > 100) break;
    }

    print(t);
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
