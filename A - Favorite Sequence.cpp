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
   cin >> n;
   
   int arr[n], res[n];
   scanArray(arr, n);
   int l = 0, r = n-1, i = 0;
   while(l<r) {
       res[i] = arr[l];
       res[i+1] = arr[r];
       l++; r--;
       i += 2;
   }
   
   if(n&1) res[n-1] = arr[l];

   printArray(res, n);
   newline;
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
