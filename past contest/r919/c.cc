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

int gcd(int a, int b) {
  if (a == 0)
    return b;
  else if (b == 0)
    return a;
  else if (a > b)
    return gcd(a % b, b);
  else
    return gcd(a, b % a);
}
bool big(vi a, int k) {
  int n = a.size();
  int gen = 0;
  for (int i = 0; i < k; i++) {
    for (int j = 1; j * k < n; j++) {
      gen = gcd(gen, abs(a[j * k + i] - a[(j - 1) * k + i]));
    }
  }
  return gen != 1;
}

void solve() {
  int n;
  cin >> n;
  vi a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int points = 0;
  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      if (big(a, i)) {
        points++;
      }
      if (i * i != n and big(a, n / i)) {
        points++; 
      }
    }
  }
  cout << points << endl;
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