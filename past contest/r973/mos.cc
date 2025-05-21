#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>

using namespace std;

struct info {
  int l, r;
  int pos;
  int res;
};

#define ppp pair<pair<int, int>, info>

bool comparison(ppp a, ppp b) {
  if (a.first.first != b.first.first) {
    return a.first.first < b.first.first;
  } else {
    return a.first.second < b.first.second;
  }
}

int choose(int a, int b) {
  if (b == 3) {
    return a * (a - 1) * (a - 2) / 6;
  } else {
    return a * (a - 1) / 2;
  }
}

int total(int n, int parells, int tripletes) {
  return choose(n, 3) - (n - 2) * parells + 2 * tripletes;
}

void insertar(int u, vi &M, int &parells, int &tripletes,
              int &totals) {
  parells -= choose(M[u], 2);
  tripletes -= choose(M[u], 3);
  M[u]++;
  totals++;
  parells += choose(M[u], 2);
  tripletes += choose(M[u], 3);
}

void eliminar(int u, vi &M, int &parells, int &tripletes,
              int &totals) {
  parells -= choose(M[u], 2);
  tripletes -= choose(M[u], 3);
  M[u]--;
  totals--;
  parells += choose(M[u], 2);
  tripletes += choose(M[u], 3);
}

vector<int> CoordinateCompression(vector<int> v) {
	// v tienes elementos en el rango [1, 10^9] y tamaño n.
	int n = v.size();
	unordered_map<int, int> m;
	int it = 0;
	for (int i = 0; i < n; i++) {
		if (m.count(v[i]))
			continue;
		m[ v[i] ] = ++it;
	}
	
	// ans tiene elementos en el rango [1, n] y tamaño n.
	vector<int> ans(n);
	for (int i = 0; i < n; i++)
		ans[i] = m[ v[i] ];
		
	return ans;
}

void solve(int n) {
  vi a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  a = CoordinateCompression(a);

  vi M (n+1,0);

  int parells = 0;
  int tripletes = 0;
  int totals = 0;

  int nn = ceil(sqrt(n));

  vector<pair<pair<int, int>, info>> Q(n);

  for (int i = 0; i < n; i++) {
    Q[i].second.pos = i;
    cin >> Q[i].second.l >> Q[i].second.r;
    Q[i].first.first = Q[i].second.l / nn;
    Q[i].first.second = Q[i].second.r;
  }

  sort(Q.begin(), Q.end(), comparison);

  int l = 0, r = -1;
  for (int i = 0; i < n; i++) {
    while (l > Q[i].second.l) {
      l--;
      insertar(a[l], M, parells, tripletes, totals);
    }
    while (r < Q[i].second.r) {
      r++;
      insertar(a[r], M, parells, tripletes, totals);
    }
    while (r > Q[i].second.r) {
      eliminar(a[r], M, parells, tripletes, totals);
      r--;
    }
    while (l < Q[i].second.l) {
      eliminar(a[l], M, parells, tripletes, totals);
      l++;
    }
    Q[i].second.res = total(totals, parells, tripletes);
  }
  vector<pair<int, int>> R(n);
  for (int i = 0; i < n; i++) {
    R[i].first = Q[i].second.pos;
    R[i].second = Q[i].second.res;
  }
  sort(R.begin(), R.end());
  for (int i = 0; i < n; i++) {
    cout << R[i].second << endl;
  }
  cout << "----" << endl;
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.setf(ios::fixed);
  cout.precision(0);
  int tt = 1;
  // cin >> tt;
  int n;
  while (cin >> n) {
    solve(n);
  }
}