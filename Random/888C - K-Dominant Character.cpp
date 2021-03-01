#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define des()                   greater<>()
#define pqueue                  priority_queue
#define pub                     push_back
#define pob                     pop_back  
#define endl                    '\n'        //in interactive problem should not use this
#define print_array(v, a, n)    for(ll i = a; i <= n; i++) { cout << v[i] << " "; } cout << endl;
#define print(var)              cout << var << endl;
typedef long long int ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<vector<int>> vii;
const double pi = 3.141592653589793;
const int inf = INT_MAX;
const int N = 2e5+5;

/*************User defined function*************/
void solve() {
    string str;
    cin >> str;

    int ans = inf;
    for(int i = 'a'; i <= 'z'; i++) {
        int maxi = 0, dist = 0;
        for(int j = 0; j <= str.size(); j++) {
            maxi = max(maxi, ++dist);
            if(i == str[j]) dist = 0;
        }
        //maxi = max(maxi, ++dist);            //abghim
        ans = min(ans, maxi);
    }

    print(ans);
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
    //cin >> test;
    while(test-- > 0) {
        solve();
    }

    return 0;
}    
