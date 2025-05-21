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

void print(vi a) {
  int n = a.size();
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}

void solve() {
  int n;
  cin >> n;
  vi a;
  int k = 0;
  int p = 1;
  while (2*p <= n) {
    p *= 2;
    k++;
  }
  n -= p;
  for (int i = 0; i < k; i++)
  {
    a.pb(i);
  }
  
  while (n > 0) {
    p = 1;
    k = 0;
    while (2*p <= n) {
    p *= 2;
    k++;
  }
  n -= p;
  a.pb(k);
  }
cout << a.size() << endl;
print (a);
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