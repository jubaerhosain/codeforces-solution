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
const ll inf = 1e18;
const int N = 1e5+5;

/*************User defined function*************/
void solve() {
    int n;
    cin >> n;
    
    set<int> fact;
    for(int i = 2; i*i <= n; i++) {
        if(n%i == 0 && fact.count(i) == 0) {
            fact.insert(i);
            n /= i;
        }
        if(fact.size() == 2) break;
    }

    if(fact.size() < 2 || fact.count(n) || n == 1) {
        print("NO");
    } else {
        print("YES");
        for(auto i: fact) cout << i << " ";
        print(n);
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
