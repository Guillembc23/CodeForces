#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

const int MOD = 998244353;
//
//
//
void proc(int &a, int &n) {
  a = n % 10;
  if (a == 0) {
    a = 10;
  }
  n = n / 10;
}

void solve() {
  int n;
  cin >> n;
  int x, y, z, w;
  proc(x, n);
  proc(y, n);
  proc(z, n);
  proc(w, n);
  cout << (3 + w +abs(x - y) + abs(y - z) + abs(z - w)) << endl;
}
//
//
//
int main() {
  int tt = 1;
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}