#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define pqueue                  priority_queue
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define rep(i, s, n)            for(ll i = s; i < n; i++)
#define rrep(i, n, s)           for(ll i = n; i >= s; i--)
typedef long long int ll;
typedef long double ld;
typedef pair<int, int> pii;
const int inf = INT_MAX;
const int N = 2e3+5;

/*************User defined function*************/
vector<int> inx[N];

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    rep(i, 0, n) {
        cin >> v[i];
        inx[v[i]].push_back(i+1);
    }

    sort(all(v), greater<int>());

    int sum = 0;
    vector<int> a;
    rep(i, 0, k) {
        sum += v[i];
        a.push_back(inx[v[i]].back());
        inx[v[i]].pop_back();
    }

    if(k == 1) {
        print(sum);
        print(n);
    } else {
        print(sum);

        sort(all(a));
        rep(i, 0, k-1) {
            if(i == 0) cout << a[i] << " ";
            else cout << a[i]-a[i-1] << " ";
        }

        int last = a[k-1] - a[k-2];
        last += (n-a[k-1]);
        print(last);
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
    //cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
