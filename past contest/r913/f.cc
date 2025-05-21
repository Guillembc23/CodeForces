#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define si set<int>
#define pb push_back
const int MOD = 998244353;
//
//
//
bool right(vi a, int pos, int n) {
  for (int i = 1; i < n; i++) {
    if (a[(pos + i - 1) % n] > a[(pos + i) % n]) return false;
  }
  return true;
}

bool left(vi a, int pos, int n) {
  for (int i = 1; i < n; i++) {
    if (a[(n + pos - i + 1) % n] > a[(n + pos - i) % n]) return false;
  }
  return true;
}

void solve() {
  int n;
  cin >> n;
  vi a(n);
  int pos1, pos2;
  int mini = (1 << 10);
  int maxi = -mini;
  int maxpos;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    mini = min(a[i], mini);
    if (a[i] > maxi) {
      maxpos = i;
      maxi = a[i];
    }
  }
  for (int i = 0; i < n; i++) {
    if (a[(i + maxpos) % n] == mini) pos2 = (i + maxpos) % n;
  }
  for (int i = 0; i < n; i++) {
    if (a[(i + maxpos) % n] == mini) {
      pos1 = (i + maxpos) % n;
      break;
    }
  }
  if (right(a, pos1, n) and left(a, pos2, n)) {
    cout << min(min(pos1, n - pos1 + 2), min(pos2, n - pos2) + 1) << endl;
  } else if (right(a, pos1, n)) {
    cout << min(pos1, n - pos1 + 2) << endl;
  } else if (left(a, pos2, n)) {
    cout << min(pos2, n - pos2) + 1 << endl;
  } else
    cout << -1 << endl;
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