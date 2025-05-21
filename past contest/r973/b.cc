#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int s = 0;
    for (int i = 0; i < n-2; i++)
    {
        int x;
        cin >> x;
        s += x;
    }
    int x, y;
    cin >> x >> y;
    cout << s + y - x << endl;
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