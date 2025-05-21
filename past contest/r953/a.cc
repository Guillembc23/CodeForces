#include <bits/stdc++.h>
#define vi vector<int>
using namespace std;

void solve() {
  int n;
  cin >> n;
  int max = 0;
  while (n--) {
    int x;
    cin >> x;
    if (n > 0) {
      if (x >= max) {
        max = x;
      }
    } else {
        cout << max + x << endl;
    }
  }
}

int main() {
  cout.setf(ios::fixed);
  cout.precision(0);
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int tt;
  cin >> tt;
  while (tt--) {
    solve();
  }
}