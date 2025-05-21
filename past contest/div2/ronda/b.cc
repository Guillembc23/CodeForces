#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vd vector<double>
#define pb push_back
const int MOD = 998244353;

bool can(int i, vi &a) {
  int x = a[i];
  int j = i - 1;
  int menor = 0;
  int major = 0;
  while (j >= 0) {
    if (a[j] >= x)
      major++;
    else
      menor++;
    if (major >= menor) {
      return true;
    }
    j--;
  }
  j = i + 1;
  menor = 0;
  major = 0;
  while (j < a.size()) {
    if (a[j] >= x)
      major++;
    else
      menor++;
    if (major >= menor) {
      return true;
    }
    j++;
  }
  return false;
}

void binsearch(int i, int j, vi &a, vector<pair<int, int>> &b) {
  if (j <= i + 1)
    cout << a[b[i].second] << endl;
  else {
    int m = (i + j) / 2;
    while (m < j -1  and a[b[m].second] == a[b[m + 1].second]) m++;
    if (can(b[m].second, a)) {
      binsearch(m, j, a, b);
    } else {
      binsearch(i, m, a, b);
    }
  }
}

void solve() {
  int n;
  cin >> n;
  vi a(n);
  vector<pair<int, int>> b(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    b[i] = {a[i], i};
  }
  sort(b.begin(), b.end());
  binsearch(0, n, a, b);
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
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}