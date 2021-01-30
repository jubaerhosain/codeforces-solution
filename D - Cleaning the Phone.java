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
#define sortV(v) sort(v.begin(), v.end())
#define sortVr(v) sort(v.rbegin(), v.rend())
#define rep(i, a, n) for(int i = a; i < n; i++)
#define add push_back
#define long long long
#define inf 1e9

/*************User defined function*************/
void solve() {
    int test;
    cin >> test;

    while(test-- > 0) {
        int n, m;
        cin >> n >> m;

        int arr[n];
        scanArray(arr, n);

        vector<int> a, b;
        rep(i,0,n) {
            int bi;
            cin >> bi;
            if(bi == 1) a.add(arr[i]);
            else b.add(arr[i]);
        }

        sortVr(a);
        sortVr(b);
        long sumA = 0, sumB = 0;
        rep(i, 0, b.size()) sumB += b[i];
        int r = b.size(), ans = inf;;
        rep(l, 0, a.size()+1) {
            while(r > 0 && sumA+sumB-b[r-1] >= m) {
                r--;
                sumB -= b[r];
            }

            if(sumA+sumB >= m) {
                ans = min(ans, 2*r+l);
            }

            if(l != a.size()) sumA += a[l];
        }

        ans = (ans==inf)?-1:ans;
        cout << ans << endl;
    }

   
}

/*************main function*************/
int main() {
    solve();
    return 0;
}
