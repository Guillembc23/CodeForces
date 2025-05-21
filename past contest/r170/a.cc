#include <bits/stdc++.h>
#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>

using namespace std;


void solve() {
    string s, t;
    cin >> s >> t;
    int ans = s.size() + t.size();
    int i = 0;
    while (i < s.size() and i < t.size() and s[i] == t[i]) i++;
    cout << min(ans,ans-i+1) << endl;
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