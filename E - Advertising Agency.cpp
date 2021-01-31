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
#define inf 1e9
int mod = 1e9+7;

/*************nCr%mod Little Fermat Algorithm*************/
int power(uLong x, int y, int p) {
    uLong res = 1;                           // Initialize result
    x = x % p;                               // Update x if it is more than or equal to p
    while(y > 0) {
        if (y & 1)                           // If y is odd, multiply x with result
            res = (res * x) % p;
        y = y >> 1;                          // y = y/2, y must be even now
        x = (x * x) % p;
    }
    return res;
}
     
int modInverse(uLong n, int p) {
    return power(n, p - 2, p);
}
     
int nCrModPFermat(uLong n, int r, int p) {
        if(n < r)                               // If n<r, then nCr should return 0
            return 0;
        if(r == 0)                              // Base case
            return 1;
     
        uLong fac[n + 1];                        //dp array fac
        fac[0] = 1;
        for(int i = 1; i <= n; i++)
            fac[i] = (fac[i - 1] * i) % p;
     
    return (fac[n] * modInverse(fac[r], p) % p * modInverse(fac[n - r], p) % p) % p;
}

/*************User defined function*************/
void solve() {
    int test;
    cin >> test;
    while(test-- > 0) {
        int n, k;
        cin >> n >> k;

        int arr[n];
        scanArray(arr,n);
        sortAr(arr, n);

        //least element is k-1 th element
        int total = 0, pos = 0;
        rep(i, 0, n) {
            if(arr[i] == arr[k-1]) total++;
        }
        rep(i, 0, k) {
            if(arr[i] == arr[k-1]) pos++;
        }

        cout << nCrModPFermat(total, pos, mod) << endl;
    }

}

/*************main function*************/
int main() {
    solve();
    return 0;
}
