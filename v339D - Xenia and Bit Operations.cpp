#include<bits/stdc++.h>
using namespace std;
#define endl          '\n'
#define all(v)        v.begin(), v.end()
#define print(var)    cout << var << endl
#define out(a, b)     cout << a << " " << b << endl
#define rep(i, s, n)  for(int i = s; i < n; i++)
#define rrep(i, n, s) for(int i = n; i >= s; i--)
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;

/*************STree*************/
const int N = 2e5+5;
vector<int> a(N);
vector<int> tree(4*N);

void buildST(int i, int l, int r, int d) {
    if(l == r) {
        tree[i] = a[l];
        return;
    }
    
    int mid = (l + r) / 2;
    buildST(2*i+1, l, mid, d-1); 
    buildST(2*i+2, mid+1, r, d-1);
    if(d&1)
        tree[i] = tree[2*i+1] | tree[2*i+2];
    else
        tree[i] = tree[2*i+1] ^ tree[2*i+2];
}

void update(int i, int sl, int sr, int pos, int val, int d) {
    if(sl == sr) {                           //update in the leaf node of the tree
        tree[i] = val;
        return;
    }
    
    int mid = (sl + sr) / 2;
    if(pos <= mid) 
        update(2*i+1, sl, mid, pos, val, d-1);
    else 
        update(2*i+2, mid+1, sr, pos, val, d-1);
    
    if(d&1)
        tree[i] = tree[2*i+1] | tree[2*i+2];  
    else
        tree[i] = tree[2*i+1] ^ tree[2*i+2];  
}

void update(int pos, int val, int n, int d) {
    a[pos] = val;
    update(0, 0, n-1, pos, val, d);
}

/*************User defined function*************/
void solve() {
    int n, m;
    cin >> n >> m;

    rep(i, 0, (1<<n)) cin >> a[i];

    //must have to call buildST first
    //root of the tree is 0'th index
    buildST(0, 0, (1<<n)-1, n);

    while(m--) {
        int p, b;
        cin >> p >> b;
        p--;
        update(p, b, (1<<n), n);
        print(tree[0]);
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
