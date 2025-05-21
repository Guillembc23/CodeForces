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

int combo3(int a) { return a * (a - 1) * (a - 2) / 6; }

int combo2(int a) { return a * (a - 1) / 2; }

void solve() {
  int n;
  cin >> n;
  vi a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  int seguits = 1;
  int total = 0;
  bool esc = false;
  for (int i = 1; i < n; i++) {
    if (a[i] == a[i - 1])
      seguits++;
    else {
      total += combo3(seguits) + combo2(seguits) * (i - seguits);

      seguits = 1;
    }
  }
  total += combo3(seguits) + combo2(seguits) * (n - seguits);

  cout << total << endl;
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