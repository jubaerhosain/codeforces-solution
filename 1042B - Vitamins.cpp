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
#define Map map
#define String string
/*************Global variable*************/
int inf = 1e9;
Map<String, int> mp;
/*************User defined function*************/
int getCom(String a, String b) {
    if(!mp.count(a)|| !mp.count(b)) {
        return inf;
    }
    return mp[a]+mp[b];
}

void solve() {
    int n;
    cin >> n;

    while(n-- > 0) {
        int c;
        String s;
        cin >> c >> s;
        sortString(s);
        //cout << "string: " << s << endl;
        if(mp.count(s) == 0) mp[s] = c;
        else mp[s] = min(mp[s], c);
    }

    int ans = 1e9;
    //a and b and c
    if(mp.count("A") && mp.count("B") && mp.count("C")) 
        ans = mp["A"] + mp["B"] + mp["C"];
    //abc
    if(mp.count("ABC")) 
        ans = min(ans, mp["ABC"]);
    //combination 
    ans = min(ans, getCom("AB", "C"));
    ans = min(ans, getCom("A", "BC"));
    ans = min(ans, getCom("AC", "B"));
    ans = min(ans, getCom("AB", "BC"));
    ans = min(ans, getCom("AC", "BC"));
    ans = min(ans, getCom("AC", "AB"));
    

    if(ans == inf) cout << -1 << endl;
    else cout << ans << endl;
}

/*************main function*************/
int main() {
    solve();
    return 0;
}
