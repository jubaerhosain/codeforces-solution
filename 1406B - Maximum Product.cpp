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
    int test;
    scanInt(test);

    while(test-- > 0) {
        int n;
        scanInt(n);
        int arr[n];
        scanIntArray(arr, n);
        sort(arr, arr+n);

        long64 ans = -1e18;
        for(int i = 0;  i < 5; i++) {
            long64 a = arr[(n-5+i)%n];
            long64 b = arr[(n-4+i)%n];
            long64 c = arr[(n-3+i)%n];
            long64 d = arr[(n-2+i)%n];
            long64 e = arr[(n-1+i)%n];

            ans = max(ans, a*b*c*d*e);
        }

        printLong64(ans);
    }
}

/*************main function*************/
int main() {
    solve();
    return 0;
}
