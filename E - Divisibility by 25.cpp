#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define rall(v)                 v.rbegin(), v.rend()
#define des()                   greater<>()
#define rep(i, a, n)            for(int i = a; i < n; i++)  
#define rrep(i, n, a)           for(int i = n; i >= a; i--)
#define bitcount(x)             __builtin_popcount(x)
#define bitcountll(x)           __builtin_popcountll(x)
#define umap                    unordered_map
#define uset                    unordered_set
#define pb                      push_back
#define endl                    '\n'
#define println                 cout << endl;
#define scan_array(arr, n)      for(int i = 0; i < n; i++) cin >> arr[i];
#define print_array(arr)        for(auto val: arr) cout << val << " ";
#define print(var)              cout << var << endl
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
const int eps = 1e-9;
const int inf = INT_MAX;

/*************User defined function*************/
vector<int> dgt(10, 0);

void dgtCount(string str) {
    for(char ch: str) {
        dgt[ch-'0']++;
    }
}

int helper(string s, char x, char y) {
    if(x == '0' && y == '0') {
        if(dgt[x-'0'] < 2) return inf;
    } else if(dgt[x-'0'] < 1 || dgt[y-'0'] < 1) return inf;

    int ans = 0, n = s.size();
    //place last digit
    rrep(i, n-1, 0) {
        if(s[i] == y) {
            int k = i;
            while(k < n-1) {
                swap(s[k], s[k+1]);
                k++, ans++;
            }
            break;
        }
    }

    //place second last digit
    rrep(i, n-2, 0) {
        if(s[i] == x) {
            int k = i;
            while(k < n-2) {
                swap(s[k], s[k+1]);
                k++, ans++;
            }
            break;
        }
    }
    
    if(s[0] != '0')  return ans;

    //move leading zeros
    bool can = false;
    rep(i, 0, n-2) {
        if(s[i] != '0') {
            can = true;
            ans += i;
            break;
        }
    }

    if(!can) return inf;
    else return ans;
}

void solve() {
    string str; cin >> str;

    int ans = inf;
    dgtCount(str);
    ans = min(ans, helper(str, '0', '0'));
    ans = min(ans, helper(str, '2', '5'));
    ans = min(ans, helper(str, '5', '0'));
    ans = min(ans, helper(str, '7', '5'));

    cout << (ans==inf?-1:ans) << endl;
}

/*************main function*************/
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 

    // int test;
    // cin >> test;
    // while(test-- > 0) {
    //     solve();
    // }

    solve();

    return 0;
}    
