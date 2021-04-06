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
typedef vector<vector<int>> vii;
const ll inf = 1e9;
const int N = 2e5+5;

/*************User defined function*************/
void out(int a, int b) {
    cout << a << " " << b << endl;
}

void solve() {
    string s;
    cin >> s;

    if(s.size() < 26) {
        print(-1);
        return;
    }

    map<char, int> ch;
    set<int> inx;
    rep(i, 0, 26) {
        if(s[i] == '?') inx.insert(i);
        else ch[s[i]]++;
    }

    bool flag = false;
    int l = 0, r = 25;
    while(r < s.size()) {
        if(ch.size() + inx.size() == 26) {
            flag = true;
            break;
        } else {
            if(r+1 == s.size()) break;
            l++, r++;
            if(s[l-1] != '?') {
                ch[s[l-1]]--;
                if(ch[s[l-1]] == 0) ch.erase(s[l-1]);
            } else {
                inx.erase(inx.begin());
            }
            if(s[r] == '?') inx.insert(r);
            else ch[s[r]]++;
        }
    }

    if(flag) {
        for(int i: inx) {
            for(char c = 'A'; c <= 'Z'; c++) {
                if(!ch.count(c)) {
                    s[i] = c;
                    ch[c]++;
                    break;
                }
            }
        }
        for(char &c: s) if(c == '?') c = 'A';
        print(s);
    } else {
        print(-1);
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
