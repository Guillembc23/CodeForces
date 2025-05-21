#include <bits/stdc++.h>
#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>

using namespace std;


void solve() {
    int n, k;
    cin >> n >> k;
    if (k > 1) {
    int tot = 0;
    while (n > 0) {
        tot += n % k;
        n /= k;
    }
    cout << tot << endl;
    } else {
        cout << n << endl;
    }
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    solve();
  }
}