/*************Headers*************/
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<map>
using namespace std;
/*************preprocessors*************/
#define add push_back
#define sortVector(v) sort(v.begin(), v.end()); 
#define sortString(s) sort(s.begin(), s.end()); 
#define sortArray(arr, n) sort(arr, arr+n)
/*************Data type preprocessors*************/
#define long long long
/*************Global variable*************/
int inf = 1e9;
/*************User defined function*************/
void solve() {
    int test;
    cin >> test;

    while(test-- > 0) {
        long n;
        cin >> n;

        if(n&(n-1)) 
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
}

/*************main function*************/
int main() {
    solve();
    return 0;
}
