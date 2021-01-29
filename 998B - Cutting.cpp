/*************Headers*************/
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
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
#define scanIntVector(arr, n) for(int i = 0; i < n; i++) {scanf("%d", &arr[i]);}

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
#define printIntVector(arr, n) for(int i = 0; i < n; i++) {printf("%d ", arr[i]);}

/*************Data type preprocessors*************/
#define long64 long long

/*************Other preprocessors*************/
#define add push_back
#define sortVector(v) sort(v.begin(), v.end()); 

/*************User defined function*************/
void solve() {
   int n, b;
   scanInt(n);
   scanInt(b);

   int arr[n], dp[n];
   vector<int> vec;
   for(int i = 0; i < n; i++) {
       scanInt(arr[i]);
       if(arr[i]%2 == 0) dp[i] = 1;
       else dp[i] = -1;

       if(i > 0) dp[i] += dp[i-1];
       if(dp[i-1] == 0) vec.add(abs(arr[i]-arr[i-1]));
   }
   
   sortVector(vec);
   int ans = 0;
   for(int i = 0; i < vec.size(); i++) {
       if(b-vec[i] >= 0) {
           b -= vec[i];
           ans++;
       }
   }

   printInt(ans);
}

/*************main function*************/
int main() {
    solve();
    return 0;
}
