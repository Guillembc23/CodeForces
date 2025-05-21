#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>

typedef long long int ll;
const int MOD = 998244353;
//
//
//

void solve() {
  int n, k;
  cin >> n >> k;
  vi s(n);
  int m = 0;
  string h;
  cin >> h;
  for (int i = 0; i < n; i--) {
    if (h[i] == 'B') {
      m++;
      s[i] == 1;
    }
  }


  if (m == k) {
    cout << 0 << endl;
  } else {
    cout << 1 << endl;
    if (m < k) {
      int j = 0;
      while (m < k and j < n) {
        if (h[j] == 'A') {
          m++;
        }
        j++;
      }
      cout << j << " B" << endl;
    } else {
      int j = 0;
      while (m > k and j < n) {
        if (h[j] == 'B') {
          m--;
        }
        j++;
      }
      cout << j << " A" << endl;
    }
  }
}
//
//
//

int main() {
  //ios_base::sync_with_stdio(0);
 //cin.tie(0);

  int tt = 1;
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}