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
struct segment {
  int l, r;
};

segment intersect(segment s1, segment s2) {
  segment res;
  res.l = max(s1.l, s2.l);
  res.r = min(s1.r, s2.r);
  return res;
}

bool pos(int k, vector<segment> s, int n) {
  segment p = s[0];
  for (int i = 1; i <= n; i++) {
    p.r += k;
    p.l -= k;
    p = intersect(p, s[i]);
    if (p.l > p.r) {
      return false;
    }
  }
  return true;
}

void solve() {
  int n;
  cin >> n;
  vector<segment> s(n + 1);
  s[0].r = 0;
  s[0].l = 0;
  for (int i = 1; i <= n; i++) {
    cin >> s[i].l >> s[i].r;
  }

  int top = (1 << 30);
  int f = top/2;
  int best = top;
  while (top > 0) {
    top /= 2;
    if (pos(f, s, n)) {
      best = f;
      f -= top;
    } else {
      f += top;
    }
  }

  cout << best << endl;
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