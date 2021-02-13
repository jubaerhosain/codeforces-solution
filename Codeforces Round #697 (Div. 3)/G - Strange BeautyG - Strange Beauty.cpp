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
   int n;
   cin >> n;

   int maxi = 0, arr[n];
   rep(i, 0, n) {
       cin >> arr[i];
       maxi = max(maxi, arr[i]);
   }

   vector<int> freq(maxi+1, 0), dp(maxi+1, 0);
   rep(i, 0, n) freq[arr[i]]++;
   
   int k = 1;
   rep(i, 1, maxi+1) {
       dp[i] += freq[i];
       for(int j = 2*i; j <= maxi; j += i) {
           dp[j] = max(dp[i], dp[j]);
       }
       k = max(k, dp[i]);
   }

   cout << n-k << endl;
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
