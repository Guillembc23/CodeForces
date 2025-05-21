#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long int ll;
const int MOD = 998244353;
//
//
//

bool good0(vector<char> a) {
  if (a.size() == 1) {
    return true;
  } else {
    int n = a.size();
    bool cond = a[n - 1] == '1' or a[n - 2] == '1';
    a.pop_back();
    return good0(a) and cond;
  }
}

bool good1(vector<char> a) {
  if (a.size() == 1) {
    return true;
  } else {
    int n = a.size();
    bool cond = a[n - 1] == '0' or a[n - 2] == '0';
    a.pop_back();
    return good1(a) and cond;
  }
}

void solve() {
  int n, m;
  cin >> n >> m;

  vector<char> a(n), b(m);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }

  bool sol = false;

  char x = b[0], y = b[m - 1];
  int caseb;
  if (good0(b) and good1(b)) {
    if (x == '0' and y == '0') {
      caseb = 0;
    } else if (x == '1' and y == '1') {
      caseb = 1;
    } else {
      caseb = 2;
    }
  } else {
    caseb = 2;
  }

  bool f = good0(a), g = good1(a);

  if (f and g) {
    sol = true;
  } else if (f and caseb == 0) {
    sol = true;
  } else if (g and caseb == 1) {
    sol = true;
  }

  if (sol) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
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