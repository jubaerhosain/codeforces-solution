#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	vector<set<int>> poss(26);
	for (int i = 0; i < int(s.size()); ++i) {
		poss[s[i] - 'a'].insert(i);
	}
	
	int q;
	cin >> q;
	for (int i = 0; i < q; ++i) {
		int tp;
		cin >> tp;
		if (tp == 1) {
			int pos;
			char c;
			cin >> pos >> c;
			--pos;
			poss[s[pos] - 'a'].erase(pos);
			s[pos] = c;
			poss[s[pos] - 'a'].insert(pos);
		} else {
			int l, r;
			cin >> l >> r;
			--l, --r;
			int cnt = 0;
			for (int c = 0; c < 26; ++c) {
				auto it = poss[c].lower_bound(l);
				if (it != poss[c].end() && *it <= r) ++cnt;
			}
			cout << cnt << endl;
		}
	}
	
	return 0;
}
