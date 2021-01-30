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
#define inf 1e9

/*************User defined function*************/
void solve() {
    // int test;
    // cin >> test;
    // while(test-- > 0) {
    // }

    long n;
    cin >> n;
    if(n&1) {
        cout << 0 << endl;
    } else {
        n /= 2;
        cout << (n-1)/2 << endl;
    }
}

/*************main function*************/
int main() {
    solve();
    return 0;
}
