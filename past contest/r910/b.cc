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
  int n;
  cin >> n;
  vi s(n);
  int sol = 0;
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }
  for (int i = n - 1; i > 0; i--) {
    if (s[i] < s[i - 1]) {
      int k = ceil(s[i - 1]*1.0 / s[i]);
      sol += (k-1);
      s[i - 1] = s[i-1]/k;
    }
  }
  cout << sol << endl;
}
//
//
//

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int tt = 1;
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}