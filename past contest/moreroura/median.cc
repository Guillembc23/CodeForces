#include <bits/stdc++.h>
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back
#define int long long

using namespace std;

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.setf(ios::fixed);
  cout.precision(2);
  int n;
  while (cin >> n) {
    vi a(n);
    int s = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      s += a[i];
    }
    sort(a.begin(), a.end());
    double sol = max(max(abs(a[n / 2] - (s - a[0]) *1.0/ (n - 1)),
                         abs(a[n / 2] - (s - a[n / 2 - 1]) *1.0/ (n - 1))),
                         max(abs(a[n / 2 - 1] - (s - a[n - 1]) *1.0/ (n - 1)),
                             abs(a[n / 2 - 1] - (s - a[n / 2]) *1.0/ (n - 1))));
    cout << sol << endl;
  }
}