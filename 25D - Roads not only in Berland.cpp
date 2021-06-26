#include<bits/stdc++.h>
using namespace std;
#define endl          '\n'//notforintera
#define all(v)        v.begin(), v.end()
#define print(var)    cout << var << endl
#define out(a, b)     cout << a << " " << b << endl
#define rep(i, s, n)  for(int i = s; i < n; i++)
#define rrep(i, n, s) for(int i = n; i >= s; i--)
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;

/*************User defined function*************/
const int N = 2e5+5;
vector<int> prnt, rnk;

int find(int u) {
    if(prnt[u] == -1) return u;
    return prnt[u] = find(prnt[u]);
}

void merge(int u, int v) {
    u = find(u);
    v = find(v);

    if(rnk[u] < rnk[v]) 
        swap(u, v);

    rnk[u] += rnk[v];
    prnt[v] = u;
}

void solve() {
    int n;
    cin >> n;

    rnk = vector<int>(n+1, 1);
    prnt = vector<int>(n+1, -1);

    vector<pii> cl;
    rep(i, 0, n-1) {
        int u, v;
        cin >> u >> v;
        int x = find(u);
        int y = find(v);
        if(x == y) 
            cl.push_back({u, v});
        else
            merge(x, y);
    }
    
    vector<int> root;
    rep(x, 1, n+1) {
        if(find(x) == x) 
            root.push_back(x);
    }
    
    int i = 0;
    print(cl.size());
    for(auto it: cl) {
        cout << it.first << " " << it.second << " ";
        cout << root[i] << " " << root[i+1] << endl;
        i++;
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
    cout << setprecision(16);

    int test = 1;
    //cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
