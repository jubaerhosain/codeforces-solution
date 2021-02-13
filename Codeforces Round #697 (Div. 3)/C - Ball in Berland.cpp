#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<map>
using namespace std;
#define add push_back
#define sortVector(v) sort(v.begin(), v.end()); 
#define sortString(s) sort(s.begin(), s.end()); 
#define sortArray(arr, n) sort(arr, arr+n)
#define long long long
#define inf 1e9

/*************User defined function*************/
void solve() {
    int test;
    cin >> test;

    while(test-- > 0) {
        int a, b, k;
        cin >> a >> b >> k;
        int boy[k], cnt1[a+1] = {0};
        int girl[k], cnt2[b+1] = {0};
        

        for(int i = 0; i < k; i++) {
            cin >> boy[i];
            cnt1[boy[i]]++;
        }

        for(int i = 0; i < k; i++) {
            cin >> girl[i];
            cnt2[girl[i]]++;
        }

        long ans = 0;
        for(int i = 0; i < k; i++) {
            ans += k-(cnt1[boy[i]]+cnt2[girl[i]])+1;
        }

        cout << ans/2 << endl;
    }
}

/*************main function*************/
int main() {
    solve();
    return 0;
}
