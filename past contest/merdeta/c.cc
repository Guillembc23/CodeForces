#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vd vector<double>
#define si set<int>
#define pb push_back
const int MOD = 998244353;

struct cami {
  int beg, end;
};

void solve() {
  int n;
  cin >> n;
  vi a(n), indeg(n, 0);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    a[i]--;
    if (a[i] >= 0) indeg[a[i]]++;
  }
  vector<cami> c;
  cami aux;
  for (int i = 0; i < n; i++) {
    if (indeg[i] == 0) {
      aux.beg = i;
      int j = i;
      while (a[j] != -1) j = a[j];
      aux.end = j;
      c.push_back(aux);
    }
  }

  a[c[c.size() - 1].end] = c[0].beg;
  for (int i = 1; i < c.size(); i++) {
    a[c[i - 1].end] = c[i].beg;
  }

  cout << a[0] + 1;
  for (int i = 1; i < n; i++) {
    cout << " " << a[i] + 1;
  }
  cout << endl;
}
//
//
//

signed main() {
  cout.setf(ios::fixed);
  cout.precision(0);
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int tt = 1;
  //cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}