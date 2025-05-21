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


void solve() {
  int n;
  cin >> n;
  vi a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  sort(a.begin(),a.end());
  int maxi = 0;
  int count = 0;
  int k = 0, j = 0;

  while (j < n) {
    if (a[j] - a[k] < n) {
        if (j == 0 or a[j] != a[j-1]) {count++;}
        j++;
    } else {
        maxi = max(count, maxi);
        if (k == 0 or a[k] != a[k-1]) {count--;}
        k++;
    }
  }
  maxi = max(count, maxi);
  cout << maxi << endl;

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