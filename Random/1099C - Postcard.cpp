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
const ll inf = 1e18;
const int N = 1e5+5;

/*************User defined function*************/
void solve() {
    string s;
    cin >> s;

    int k;
    cin >> k;

    int len = 0, sf = 0, cc = 0;
    for(char c: s) {
        if(c == '*') sf++;
        else if(c == '?') cc++;
        else len++;
    }

    if(k < len) {
        if(len-(sf+cc) > k) {
            print("Impossible");
            return;
        }
        
        string ans;
        int left = len - k;
        rep(i, 0, s.size()) {
            char c = s[i+1];
            if((c == '*' || c == '?') && left > 0) {
                left--;
                continue;
            } else if(s[i] != '*' && s[i] != '?') {
                ans += s[i];
            }
        }

        print(ans);
    } else {
        if(k > len && sf == 0) {
            print("Impossible");
            return;
        }

        string ans;
        int need = k - len;
        rep(i, 0, s.size()) {
            char c = s[i+1];
            if(c == '*' && need > 0) {
                ans += s[i];
                while(need--) ans += s[i];
            } else if(s[i] != '*' && s[i] != '?') {
                ans += s[i];
            }
        }

        print(ans);
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
