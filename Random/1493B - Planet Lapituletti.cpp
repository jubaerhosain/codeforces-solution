#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define pqueue                  priority_queue
#define endl                    '\n'//in interactive problem should not use this
#define print(var)              cout << var << endl
#define rep(i, s, n)            for(int i = s; i < n; i++)
#define rrep(i, n, s)           for(int i = n; i >= s; i--)
typedef long long int ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const int inf = INT_MAX;
const int N = 4e3+5;

/*************User defined function*************/
int h, m;
int a[] = {0, 1, 5, -1, -1, 2, -1, -1, 8, -1};

bool valid(int hh, int mm) {
    if(a[hh/10] == -1 || a[hh%10] == -1 
    || a[mm/10] == -1 || a[mm%10] == -1) {
        return false;
    }

    int nh = a[mm%10]*10+a[mm/10];
    int nm = a[hh%10]*10+a[hh/10];

    return (nh < h) && (nm < m);
}

void solve() {
    scanf("%d%d", &h, &m);

    int hh, mm;
    scanf("%d:%d", &hh, &mm);
    while (hh != 0 || mm !=  0) {
        if(valid(hh, mm)) break;
        if(mm == m-1) hh = (hh+1) % h;
        mm = (mm+1) % m;
    } 
    
    printf("%d%d:%d%d\n", hh/10, hh%10, mm/10, mm%10);
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
    scanf("%d", &test);
    while(test--) {
        solve();
    }

    return 0;
}    
