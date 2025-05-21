#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

typedef long long int ll;

const int MOD = 998244353;
//
//
//

void solve() {
  int n;
  cin >> n;

  int moves = 0;

  vector<int> arr(n);

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    if (i != 0) {
      if (arr[i] < arr[i - 1]) {
        while (arr[i] < arr[i - 1]) {
          arr[i] *= 2;
          moves++;
        }
      }
    }
  }

  cout << moves << endl;
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