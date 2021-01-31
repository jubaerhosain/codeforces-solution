#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<map>
using namespace std;
#define scanArray(arr, n) for(int i = 0; i < n; i++) cin >> arr[i];
#define printArray(arr, n) for(int i = 0; i < n; i++) cout << arr[i] << " ";
#define sortA(arr, n) sort(arr, arr+n)
#define sortAr(arr, n) sort(arr, arr+n, greater<int>())
#define sortV(v) sort(v.begin(), v.end())
#define sortVr(v) sort(v.rbegin(), v.rend())
#define rep(i, a, n) for(int i = a; i < n; i++)
#define add push_back
#define long long long
#define uLong unsigned long
#define modMul(a, b, p) ((a%p)*(b%p))%p
//#define inf 1e9
//#define mod 1e9+7


/*************User defined function*************/
void solve() {
    // int test;
    // cin >> test;
    // while(test-- > 0) {
    // }
    int n;
    cin >> n;

    string a[n], b[n];
    rep(i, 0, n) cin >> a[i];
    getchar();
    rep(i, 0, n) cin >> b[i];

    //match and xor first row
    rep(j, 0, n) {
        if(a[0][j] != b[0][j]) {
            rep(i, 0, n) {
                a[i][j] = (a[i][j]=='1') ? '0':'1';
            }
        }
    }

    //match and xor first col
    rep(i, 0, n) {
        if(a[i][0] != b[i][0]) {
            rep(j, 0, n) {
                a[i][j] = (a[i][j]=='1') ? '0':'1';
            }
        }
    }

    string ans = "YES";
    rep(i, 0, n) {
        rep(j, 0, n) {
            if(a[i][j] != b[i][j]) {
                ans = "NO";
                break;
            }
        }
    }

    cout << ans << endl;
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
