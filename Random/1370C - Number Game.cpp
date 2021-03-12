#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define pqueue                  priority_queues
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define rep(i, s, n)            for(int i = s; i < n; i++)
#define rrep(i, n, s)           for(int i = n; i >= s; i--)
typedef long long int ll;
typedef long double ld;
typedef pair<int, int> pii;
const int inf = INT_MAX;
const int N = 4e3+5;

/*************User defined function*************/
bool prime(int n) {
    for(int i = 2; i*i <= n; i++) 
        if(n%i == 0) return false;
    
    return true;
}

void solve() {
    int n;
    cin >> n;

    bool flag = true;
    if(n == 1) {
        flag = false;
    } else if(n > 2 && n%2 == 0) {
        if((n&(n-1)) == 0) {
            flag = false;
        } else if(n%4 != 0 && prime(n/2)) {
            flag = false;
        }
    }

    if(flag) {
        print("Ashishgup");
    } else {
        print("FastestFinger");
    }
}
    

/*************main function*************/
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 

    cout << fixed << showpoint;
    cout << setprecision(9);

    int test = 1;
    cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
