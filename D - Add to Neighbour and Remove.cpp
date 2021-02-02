#include<bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define des() greater<>()
#define rep(i, a, n) for(int i = a; i < n; i++)
#define rrep(i, n, a) for(int i = n; i >= a; i--)
#define umap unordered_map
#define uset unordered_set
#define add push_back
#define ll long long
#define ull unsigned long long
#define mod(a, b, p) ((a%p)*(b%p))%p
#define newline cout << endl;
#define scanArray(arr, n) for(int i = 0; i < n; i++) cin >> arr[i];
#define printArray(arr, n)                  \
    for(int i = 0; i < n; i++) {            \
        if(i==n-1) cout << arr[i] << endl;  \
        else cout << arr[i] << " ";         \
    }
//#define inf 1e9
//#define mod 1e9+7

/*************User defined function*************/
bool equal(int arr[], int k, int n, int sum) {
    k = n-k;

    if(sum%k != 0) return false;
    int val = sum/k, curr = 0;
    for(int i = 0; i < n; i++) {
        curr += arr[i];
        if(curr == val) curr = 0;
        else if(curr > val) return false;
    }

    return curr == 0;
}

void solve() {
    int n; cin >> n;
    int arr[n], sum = 0;
    rep(i, 0, n) {
        cin >> arr[i];
        sum += arr[i];
    }

    for(int k = 0; k < n; k++) {
        if(equal(arr, k, n, sum)) {
            cout << k << endl;
            return;
        }
    }
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
