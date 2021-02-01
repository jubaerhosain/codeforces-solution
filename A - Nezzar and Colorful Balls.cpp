#include<bits/stdc++.h>
using namespace std;
#define scanArray(arr, n) for(int i = 0; i < n; i++) cin >> arr[i];
#define printArray(arr, n) for(int i = 0; i < n; i++) cout << arr[i] << " ";
#define sortA(arr, n) sort(arr, arr+n)
#define sortAr(arr, n) sort(arr, arr+n, greater<int>())
#define sortV(v) sort(v.begin(), v.end())
#define sortVr(v) sort(v.rbegin(), v.rend())
#define rep(i, a, n) for(int i = a; i < n; i++)
#define umap unordered_map
#define add push_back
#define long long long
#define uLong unsigned long
#define modMul(a, b, p) ((a%p)*(b%p))%p
//#define inf 1e9
//#define mod 1e9+7


/*************User defined function*************/
void solve() {
    int n;
    cin >> n;

    int maxi = 0;
    umap<int, int> mp;
    rep(i, 0, n) {
        int x;
        cin >> x;
        mp[x]++;
        maxi = max(maxi, mp[x]);
    }
    cout << maxi << endl;
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
