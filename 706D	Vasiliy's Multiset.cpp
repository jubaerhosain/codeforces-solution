#include<bits/stdc++.h>
using namespace std;
#define endl          '\n'//notforintera
#define all(v)        v.begin(), v.end()
#define print(var)    cout << var << endl
#define out(a, b)     cout << a << " " << b << endl
#define rep(i, s, n)  for(int i = s; i < n; i++)
#define rrep(i, n, s) for(int i = n; i >= s; i--)
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;

/*************Trie Data Structure*************/
struct TrieNode {
    int end = 0;
    TrieNode* child[2];
};

bool isEmpty(TrieNode* root) {
    rep(i, 0, 2) {
        if(root->child[i])
            return false;
    }
    return true;
}

void insert(TrieNode* root, int n) {
    TrieNode* curr = root;
    rrep(i, 31, 0) {
        int x = (n>>i)&1;
        TrieNode* node = curr->child[x];
        if(!node) {
            node = new TrieNode();
            curr->child[x] = node;
        }
        curr = node;
    }
    curr->end++;
}

TrieNode* remove(TrieNode* root, int n, int i) {
    if(!root) 
        return NULL;

    if(i < 0) {
        if(root->end > 0)
            root->end--;
        if(isEmpty(root) && root->end <= 0) {
            delete(root);
            root = NULL;
        }
        return root;
    }

    int x = (n>>i)&1;
    root->child[x] = remove(root->child[x], n, i-1);
    if(isEmpty(root) && root->end <= 0) {
        delete(root);
        root = NULL;
    }

    return root;
}

int max_xor(TrieNode* root, int n) {
    int sum = 0;
    TrieNode* curr = root;

    rrep(i, 31, 0) {
        int x = (n>>i)&1;
        if(x) {
            if(curr->child[0]) {
                sum += (2<<i);
                curr = curr->child[0];
            } else {
                curr = curr->child[1];
            }
        } else {
            if(curr->child[1]) {
                sum += (2<<i);
                curr = curr->child[1];
            } else {
                curr = curr->child[0];
            }
        }
    }

    return sum;
}

/*************User defined function*************/
const int N = 3e5+5;

void solve() {
    TrieNode* root = new TrieNode();
    insert(root, 0);
    
    int q;
    cin >> q;
    while(q--) {
        int x;
        char ch;
        cin >> ch >> x;

        if(ch == '+') {
            insert(root, x);
        } else if(ch == '-') {
            remove(root, x, 31);
        } else {
            int ans = max_xor(root, x);
            print(ans/2);
        }
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
    cout << setprecision(16);

    int test = 1;
    //cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}    
