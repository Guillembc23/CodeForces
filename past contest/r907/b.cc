#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long int ll;
const int MOD = 998244353;
//
//
//
int natlog(int a) {
  if (a % 2 == 1) {
    return 0;
  } else {
    return natlog(a / 2) + 1;
  }
}

void db(int a) { cout << "estand debug w/ idex " << a << endl; }

void solve() {
  int n, q;
  cin >> n >> q;

  vector<int> a(n), b(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    b[i] = natlog(a[i]);
  }

  for (int i = 0; i < q; i++) {
    int x;
    cin >> x;
    for (int j = 0; j < n; j++) {
      if (x <= b[j]) {
        b[j] = x - 1;
        a[j] += (1 << (x - 1));
      }
    }
  }

  cout << a[0];

  for (int i = 1; i < n; i++) {
    cout << " " << a[i];
  }

  cout << endl;
}
//
//
//

int main() {
  // ios_base::sync_with_stdio(0);
  // cin.tie(0);

  int tt = 1;
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}