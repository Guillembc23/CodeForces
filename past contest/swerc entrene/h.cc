#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long int ll;
const int MOD = 998244353;
#define vi vector<ll>
//
//
ll cross(int i, int j, vi x, vi y) { return x[i] * y[j] - x[j] * y[i]; }

ll tricross(int i, int j, int k, vi x, vi y) {
  return cross(i, j, x, y) + cross(j, k, x, y) + cross(k, i, x, y);
}

void solve() {
  int n;
  cin >> n;

  cout << n << endl;
  vi x(n);
  vi y(n);

  int min;
  int mindex;

  set<int> dots;
  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
    dots.insert(i);

    if (i == 0) {
      min = y[0];
      mindex = 0;
    } else if (y[i] < min) {
      mindex = i;
      min = y[i];
    }
  }


  dots.erase(mindex);
  cout << mindex + 1;

  while (not dots.empty()) {
    int found;
    for (auto i : dots) {
      bool good = true;
      for (auto j : dots) {
        if (tricross(mindex, i, j, x, y) < 0) {
          good = false;
        }
      }
      if (good) {
        dots.erase(i);
        cout << " " << i;
        mindex = i;
        break;
      }
    }
  }
  
  cout << endl;
}
//
//
//

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int tt = 1;
  // cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}