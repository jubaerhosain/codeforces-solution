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
typedef pair<ll, ll> pll;
const int inf = INT_MAX;
const int N = 4e3+5;

/*************User defined function*************/
void solve() {
    string a;
    cin >> a;

    int one = 0, zero = 0;
    for(char c: a) {
        if(c == '0') zero++;
        else one++;
    }

    if(zero == a.size() || one == a.size()) {
        print(a);
        return;
    }

    string ans;
    ans.push_back(a[0]);
    rep(i, 1, a.size()) {
        if(ans.back() != a[i]) {
            ans.push_back(a[i]);
        } else {
            if(a[i] == '0') {
                ans.push_back('1');
                ans.push_back(a[i]);
            } else {
                ans.push_back('0');
                ans.push_back(a[i]);
            }
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
