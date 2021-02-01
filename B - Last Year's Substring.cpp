#include<bits/stdc++.h>
using namespace std;
#define scanArray(arr, n) for(int i = 0; i < n; i++) cin >> arr[i];
#define printArray(arr, n) for(int i = 0; i < n; i++) cout << arr[i] << " ";
#define sortA(arr, n) sort(arr, arr+n)
#define sortAr(arr, n) sort(arr, arr+n, greater<int>())
#define sortV(v) sort(v.begin(), v.end())
#define sortVr(v) sort(v.rbegin(), v.rend())
#define rep(i, a, n) for(int i = a; i < n; i++)
#define rrep(i, n, a) for(int i = n; i >= a; i--)
#define umap unordered_map
#define uset unordered_set
#define add push_back
#define long long long
#define uLong unsigned long
#define modMul(a, b, p) ((a%p)*(b%p))%p
#define newline cout << endl;
//#define inf 1e9
//#define mod 1e9+7


/*************User defined function*************/
void solve() {
    int n;
    string str;
    cin >> n >> str;

    rep(i, 0, 5) {
        string l = str.substr(0, i);
        string r = str.substr(n-4+i);
        string ans = l+r;
        if(ans == "2020") {
            cout << "YES" << endl;
            return;
        }
    }
    
    cout << "NO" << endl;
}

/*************main function*************/
int main() {
    int test;
    cin >> test;

    while(test-- > 0) {
        solve();
    }

    return 0;
}    
