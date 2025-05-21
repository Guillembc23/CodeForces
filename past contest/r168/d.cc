#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>

using namespace std;

int rec(int i, vector<vector<int>> &a, vector<int> &v) {
    if (a[i].size() == 0) {
        return v[i];
        }

    int mi = 1e11;
    for (auto j : a[i]) {
        mi = min(rec(j,a,v),mi);
    }
    if (i == 0) {
        v[i] += mi;
    } else {
        if (v[i] <= mi) {
        v[i] = (v[i] + mi)/2;
        } else {
            v[i] = mi;
        }
    }
    return v[i];
}

void solve() {
  int n;
  cin >> n;
  vector<vector<int>> a(n);
  vector<int> mi(n);
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  for (int i = 1; i < n; i++) {
    int x;
    cin >> x;
    x--;
    a[x].push_back(i);
  }
  cout << rec(0,a,v) << endl;
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    solve();
  }
}