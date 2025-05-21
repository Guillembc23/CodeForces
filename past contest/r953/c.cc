#include <bits/stdc++.h>
#define vi vector<int>
#define int long long
using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;
  vi a(n);
  for (int i = 0; i < n; i++) a[i] = i + 1;
  int curr = 0;
  int j = 0, k = n-1;
  while (j < k and curr < m) {
    if (m - curr >= 2*(k-j)) {
        curr += 2*(k-j);
        swap(a[j],a[k]);
        j++;
        k--;
    } else {
        j++;
    }
  }

  if (m == curr) {
    cout << "Yes" << endl;
    for (int i = 0; i < n; i++) {
      if (i > 0) cout << " ";
      cout << a[i];
    }
    cout << endl;
  } else {
    cout << "No" << endl;
  }
}

signed main() {
  cout.setf(ios::fixed);
  cout.precision(0);
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int tt;
  cin >> tt;
  while (tt--) {
    solve();
  }
}