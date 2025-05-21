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

/*
for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
    }
  }
*/

vi st(vi a) {
  int n = a.size();
  vi st(2 * n);
  for (int i = 0; i < n; i++) st[i + n] = a[i];
  for (int i = n - 1; i > 0; i--) st[i] = st[2 * i] + st[2 * i + 1];
  return st;
}

void updatest(int x,vi &st) {
  int n = st.size() / 2;
  int h = x + n;
  st[h]--;
  h /= 2;
  while (h > 0) {
    st[h] = st[2 * h] + st[2 * h + 1];
    h /= 2;
  }
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
  vi b(n,0);
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    a[i] = x-1;
    b[a[i]]++;
  }
  
  vi seg = st(b);
  int sol = 0;
  for (int i = 0; i < n; i++)
  {
    updatest(a[i],seg);
    sol += query(0,a[i]+1,seg);
  }
  cout << sol << endl;
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