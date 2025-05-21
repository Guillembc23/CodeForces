#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>

using namespace std;

int f(int a) { return a - floor(sqrt(a)); }

void solve() {
  int k;
  cin >> k;
  int a = 1;
  while (a*a <= k) {
    a += 31000;
    k += 31000;
  }
  a-= 31000;
  k -= 31000;
  while (a*a <= k) {
    a++;
    k++;
  }
  cout << k << endl;
}

signed main() {
  //ios_base::sync_with_stdio(0);
  //cin.tie(0);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    solve();
  }
}