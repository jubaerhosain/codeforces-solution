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

/*************User defined function*************/
const int N = 1e5+5;

void print_array(vector<int> a) {
    int n = a.size();
    rep(i, 0, n-1) cout  << a[i] << '.';
    print(a[n-1]);
}

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];

    print(1);
    vector<int> stack;
    stack.push_back(1);
    rep(i, 1, n) {
        if(a[i] == 1) stack.push_back(a[i]);
        else if(a[i] == stack.back()+1) {
            stack.pop_back();
            stack.push_back(a[i]);
        } else {
            while(!stack.empty() && stack.back()+1 != a[i]) stack.pop_back();
            stack.pop_back();
            stack.push_back(a[i]);
        }
        print_array(stack);
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
    cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
