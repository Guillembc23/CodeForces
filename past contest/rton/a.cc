#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define pa pair<int, int>
#define vi vector<pa>
#define vvi vector<vi>

typedef long long int ll;
const int MOD = 998244353;
//
//
//
bool geq(pa a, pa b) { return a.first >= b.first; }

void solve() {
  int n, m;
  cin >> n >> m;
  if (n > 0) {
    vi a(n);
    vi b(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i].first;
      a[i].second = i;
    }
    for (int i = 0; i < n; i++) {
      cin >> b[i].first;
      b[i].second = i;
    }
    sort(a.begin(), a.end(), geq);
    sort(b.begin(), b.end(), geq);
    vi c(n);
    vector<int> mp(n);
    bool sol = true;
    for (int i = 0; i < m; i++) {
      c[i] = b[n - m + i];
      mp[a[i].second] = i;
      if (a[i].first <= c[i].first) sol = false;
    }
    for (int i = 0; i < n - m; i++) {
      c[i + m] = b[i];
      mp[a[i + m].second] = i + m;
      if (a[i + m].first > c[i + m].first) sol = false;
    }

    if (sol) {
      cout << "YES" << endl;
      cout << c[mp[0]].first;
      for (int i = 1; i < n; i++) {
        cout << " " << c[mp[i]].first;
      }
      cout << endl;
    } else {
      cout << "NO" << endl;
    }
  } else {
    cout << "YES" << endl;
  }
}
//
//
//

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int tt = 1;
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}