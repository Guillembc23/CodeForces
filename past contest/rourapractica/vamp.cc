//~ #pragma GCC optimize("Ofast")
//~ #pragma GCC target("avx2")
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define int long long
#define F first
#define S second
#define LB lower_bound
#define UB upper_bound
#define MP(x, y) make_pair(x, y)
const ll INF = 1e18;
const ll mod = 1e9+7;
const ll LOG = 20; // 10^6

void myassert(bool a) {
    if (not a) throw(0);
}

vector<int> segtree;
vector<int> push;
int t;

int get(int x) {
	int y = 0;
	while ((1LL << y) <= x) y++;
	return (1LL << y);
}

void p (int k) {
	if (k >= t) {
		push[k] = 0;
		return;
		
	}
	push[2*k] += push[k];
	push[2*k+1] += push[k];
	segtree[2*k] += push[k];
	segtree[2*k+1] += push[k];
	push[k] = 0;
}

void upd(int a, int b, int x, int y, int k, int val) {
	p(k);
	
	if (b < x or a > y) return;
	if (a <= x and y <= b) {
		//~ cout << k << " " << val << "\n";
		push[k] += val;
		segtree[k] += val;
		return;
	}
	
	
	int d = (x+y)/2;
	upd(a, b, x, d, 2*k, val);
	upd(a, b, d+1, y, 2*k+1, val);
	segtree[k] = max(segtree[2*k], segtree[2*k+1]);
	//~ cout << k << " " << x << " " << y << " " << segtree[k] <<  "\n";
}




signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	while (cin >> n) {
		vector<int> all;
		map<string, pair<int, int>> m;
		for (int i =0; i < n; i++) {
			string s; int a, b;
			cin >> s >> a >> b;
			m[s] = MP(a, b);
			all.push_back(a);
			all.push_back(b);
		}
		sort(all.begin(), all.end());
		map<int, int> biy;
		for (int i = 0; i < (int)all.size(); i++) biy[all[i]] = i;
		for (auto &x : m) x.S.F = biy[x.S.F], x.S.S = biy[x.S.S];

		
		t = get(all.size()+1);
		segtree.clear();
		segtree.resize(2*t);
		push.clear();
		push.resize(2*t);
		map<string, int> in;
		
		string q;
		while (cin >> q) {
			if (q == "END") break;
			if (in[q] == 1) {
				
				upd(m[q].F, m[q].S, 0, t-1, 1, -1);
				in[q] = 0;
			}
			else {
				upd(m[q].F, m[q].S, 0, t-1, 1, 1);
				in[q] = 1;
			}
			cout << segtree[1] << "\n";
		
		}
		
		cout << "----------" << "\n";
		
	}
}