#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long int a, b, c;
  cin >> a >> b >> c;
  bool cond = false;
  for (int k = 3; k < 7; k++) {
    if ((a + b + c) % k == 0) {
      long long int f = (a + b + c) / k;
      if (a % f == 0 and b % f == 0 and c % f == 0) {
        cond = true;
      }
    }
  }
  if(cond){cout << "YES" << endl;}
  else{cout << "NO" << endl;}
}

main() {
  int tt;
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}