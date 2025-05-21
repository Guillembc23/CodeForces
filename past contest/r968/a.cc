#include <bits/stdc++.h>
#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>

using namespace std;

void solve() {
  int n;
  string s;
  cin >> n >> s;
  if (s[0] == s[n-1]) cout << "NO" << endl;
  else cout <<  "YES" << endl;
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