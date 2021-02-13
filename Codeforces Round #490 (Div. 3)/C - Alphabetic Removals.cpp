#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define rall(v)                 v.rbegin(), v.rend()
#define des()                   greater<int>()
#define rep(i, a, n)            for(int i = a; i < n; i++)  
#define rrep(i, n, a)           for(int i = n; i >= a; i--)
#define bitcount(x)             __builtin_popcount(x)
#define bitcountll(x)           __builtin_popcountll(x)
#define pq                      priority_queue
#define umap                    unordered_map
#define uset                    unordered_set
#define pub                     push_back
#define pob                     pop_back  
#define endl                    '\n'    //in interactive problem should not use this
#define println                 cout << endl
#define scan_array(arr, n)      for(int i = 0; i < n; i++) { cin >> arr[i]; }
#define print_array(arr, n)     for(int i = 0; i < n; i++) { cout << arr[i] << " "; } println;
#define print(var)              cout << var << endl
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
const int eps = 1e-9;
const int inf = INT_MAX;
const int N = 1e5+10;

/*************User defined function*************/
void rev(string &s, int l, int r) {
    while(l < r) {
        char tmp = s[l];
        s[l] = s[r];
        s[r] = tmp;
        l++, r--;
    }
}

int cnt[26];
vector<int> inx[26];
void solve() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;
    rrep(i, n-1, 0) {
        cnt[s[i]-'a']++;
        inx[s[i]-'a'].pub(i);
    }

    int l = 0;
    while(k-- > 0 && l < 26) {
        while(cnt[l] <= 0) {
            l++;
        }

        if(l < 26) {
            int i = inx[l].back();
            inx[l].pob();
            cnt[l]--;
            s[i] = '#';
        }
    }

    for(char c: s) {
        if(c != '#') cout << c;
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

    // int test;
    // cin >> test;
    // while(test-- > 0) {
    //     solve();
    // }

    solve();

    return 0;
}    
