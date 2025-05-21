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

vi st(vi a) {
  int n = a.size();
  vi st(2 * n);
  for (int i = 0; i < n; i++) st[i + n] = a[i];
  for (int i = n - 1; i > 0; i--) st[i] = st[2 * i] + st[2 * i + 1];
  return st;
}

void print (vi a) {
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int query(int l, int r, vi &st) {
  int n = st.size() / 2;
  int res = 0;
  l += n;
  r += n;
  while (l < r) {
    if (l & 1) res += st[l++];
    if (r & 1) res += st[--r];
    r /= 2;
    l /= 2;
  }
  return res;
}

void solve() {
  int n;
  cin >> n;
  vi a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  vi right(n), left(n);
  right[0] = 1;
  left[0] = 0;
  left[n - 1] = 1;
  right[n - 1] = 0;

  for (int i = 1; i < n - 1; i++) {
    if (a[i + 1] - a[i] < a[i] - a[i - 1]) {
      right[i] = 1;
      left[i] = a[i] - a[i - 1];
    } else {
      left[i] = 1;
      right[i] = a[i + 1] - a[i];
    }
  }
  
  vi rightseg = st(right);
  vi leftseg = st(left);

  int m;
  cin >> m;
  int x, y;
  for (int i = 0; i < m; i++)
  {
    cin >> x >> y;
    x--;
    y--;
    if (x == y) cout << "0" << endl;
    else if (x < y) {
        cout << query (x,y,rightseg) << endl;
    } else {
        cout << query (y+1, x+1, leftseg) << endl;
    }
  }
  
}
//
//
//

signed main() {
  cout.setf(ios::fixed);
  cout.precision(0);
  //ios_base::sync_with_stdio(0);
  //cin.tie(0);

  int tt = 1;
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}