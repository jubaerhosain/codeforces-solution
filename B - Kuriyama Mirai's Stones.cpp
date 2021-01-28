/*************Headers*************/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/*************Input preprocessors*************/
#define scanInt(i) scanf("%d", &i)
#define scanLong(l) scanf("%ld", &l)
#define scanLong64(ll) scanf("%lld", &ll)
#define scanChar(c) scanf("%c", &c)
#define scanDouble(d) scanf("%lf", &d)
#define scanText(s) getline(cin, s)
#define scanWord(w) cin >> w
#define scanIntArray(arr, n) for(int i = 0; i < n; i++) {scanf("%d", &arr[i]);}

/*************Output preprocessors*************/
#define printInt(i) printf("%d\n", i)
#define printLong(l) printf("%ld\n", l)
#define printLong64(ll) printf("%lld\n", ll);
#define printChar(c) printf("%c\n", c)
#define printDouble(d) printf("%lf\n", d)
#define printText(s) cout << s << endl;
#define printWord(w) cout << w << endl;
#define newline cout << endl;
#define printIntArray(arr, n) for(int i = 0; i < n; i++) {printf("%d ", arr[i]);}

/*************Data type preprocessors*************/
#define long64 long long

/*************User defined function*************/
void solve() {
    int n;
    scanInt(n);

    long64 dp1[n], dp2[n];
    for(int i = 0; i < n; i++) {
        scanLong64(dp1[i]);
        dp2[i] = dp1[i];
    }

    sort(dp2, dp2+n);
    for(int i = 1; i < n; i++) {
        dp1[i] += dp1[i-1];
        dp2[i] += dp2[i-1];
    }

    int m;
    scanInt(m);
    while (m-- > 0) {
        int type, l, r;
        scanInt(type);
        scanInt(l);
        scanInt(r);
        l--; r--;

        if(type == 1) {
            if(l > 0) {
                printLong64(dp1[r]-dp1[l-1]);
            } else {
                printLong64(dp1[r]);
            }
        } else {
            if(l > 0) {
                printLong64(dp2[r]-dp2[l-1]);
            } else {
                printLong64(dp2[r]);
            }
        }
    }
    
}

/*************main function*************/
int main() {
    solve();
    return 0;
}
