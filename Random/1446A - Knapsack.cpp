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
const int N = 2e5+5;

/*************User defined function*************/
void solve() {
    ll n, w;
    cin >> n >> w;

    vector<pii> v(n);
    rep(i, 0, n) {
        int x; 
        cin >> x;
        v[i] = {x, i+1};
    }

    sort(all(v));
    
    ll sum = 0, l = 0, r = 0;
    set<int> st;
    while(r < n && l <= r) {
        if(sum+v[r].first <= w) {
            sum += v[r].first;
            st.insert(v[r].second);
            r++;
            if(sum >= ceil((ld)w/2)) break;
        } else {
            sum -= v[l].first;
            st.erase(v[l].second);
            l++;
        }
    }

    if(st.size() == 0 || sum < ceil((ld)w/2)) {
        print(-1);
    } else {
        print(st.size());
        for(int i: st) cout << i << " ";
        cout << endl;
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
