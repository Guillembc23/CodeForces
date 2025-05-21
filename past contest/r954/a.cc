#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define vvi vector<vi>
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    int sol = 1e8;
    for (int i = 1; i <= 10; i++)
    {
        int dis = abs(i-a) + abs(i-b)+abs(i-c);
        sol = min (dis,sol);
    }
    cout << sol << endl;
}

signed main() {
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